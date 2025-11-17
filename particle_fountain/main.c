/*******************************************************************************************
*
*   raylib - classic particle fountain
*
*   This example has been created using raylib 4.5 (www.raylib.com)
*   raylib is licensed under an unmodified zlib/libpng license (View raylib.h for details)
*
*   Copyright (c) 2023 Ramon Santamaria (@raysan5)
*
********************************************************************************************/

#include "raylib.h"

#include <stdlib.h>     // Required for: malloc(), free(), rand()
#include <math.h>       // Required for: sinf(), cosf()

#define MAX_PARTICLES 200

// Particle structure
typedef struct {
    Vector2 position;
    Vector2 velocity;
    Color color;
    float alpha;
    float size;
    float rotation;
    bool active;        // We use a pool of particles
} Particle;

//------------------------------------------------------------------------------------
// Program main entry point
//------------------------------------------------------------------------------------
int main(void)
{
    // Initialization
    //--------------------------------------------------------------------------------------
    const int screenWidth = 800;
    const int screenHeight = 600;

    InitWindow(screenWidth, screenHeight, "raylib [core] - particle fountain");

    // Particles pool initialization
    Particle particles[MAX_PARTICLES] = { 0 };

    // Fountain source position
    Vector2 fountainSource = { (float)screenWidth/2, (float)screenHeight };

    // Initialize particles
    for (int i = 0; i < MAX_PARTICLES; i++)
    {
        particles[i].active = false;
    }

    // Texture for particles
    Texture2D texture = { 0 };
    Image image = GenImageGradientRadial(16, 16, 0.3f, WHITE, BLANK);
    texture = LoadTextureFromImage(image);
    UnloadImage(image);

    SetTargetFPS(60);               // Set our game to run at 60 frames-per-second
    //--------------------------------------------------------------------------------------

    // Main game loop
    while (!WindowShouldClose())    // Detect window close button or ESC key
    {
        // Update
        //----------------------------------------------------------------------------------
        
        // Respawn new particles
        for (int i = 0; i < MAX_PARTICLES; i++)
        {
            if (!particles[i].active)
            {
                particles[i].active = true;
                particles[i].alpha = 1.0f;
                particles[i].position = fountainSource;
                particles[i].rotation = (float)GetRandomValue(0, 360);
                particles[i].size = (float)GetRandomValue(1, 6)/20.0f;
                
                float angle = (float)GetRandomValue(240, 300)*DEG2RAD;
                float speed = (float)GetRandomValue(2, 5);
                
                particles[i].velocity.x = sinf(angle)*speed;
                particles[i].velocity.y = cosf(angle)*speed;
                
                particles[i].color = (Color){ GetRandomValue(100, 255), GetRandomValue(50, 150), GetRandomValue(10, 50), 255 };
                break; // Respawn one particle per frame
            }
        }

        // Update particles
        for (int i = 0; i < MAX_PARTICLES; i++)
        {
            if (particles[i].active)
            {
                particles[i].velocity.y += 0.05f; // Gravity
                particles[i].position.x += particles[i].velocity.x;
                particles[i].position.y += particles[i].velocity.y;
                particles[i].alpha -= 0.01f;
                
                // Deactivate particle if it's faded out or off-screen
                if (particles[i].alpha <= 0.0f || particles[i].position.y > screenHeight)
                {
                    particles[i].active = false;
                }
            }
        }
        //----------------------------------------------------------------------------------

        // Draw
        //----------------------------------------------------------------------------------
        BeginDrawing();

            ClearBackground(DARKGRAY);

            for (int i = 0; i < MAX_PARTICLES; i++)
            {
                if (particles[i].active)
                {
                    DrawTexturePro(texture, (Rectangle){ 0.0f, 0.0f, (float)texture.width, (float)texture.height },
                                   (Rectangle){ particles[i].position.x, particles[i].position.y, texture.width*particles[i].size, texture.height*particles[i].size },
                                   (Vector2){ (float)(texture.width*particles[i].size/2.0f), (float)(texture.height*particles[i].size/2.0f) }, particles[i].rotation,
                                   Fade(particles[i].color, particles[i].alpha));
                }
            }
            
            DrawText("A simple particle fountain", 10, 10, 20, WHITE);

        EndDrawing();
        //----------------------------------------------------------------------------------
    }

    // De-Initialization
    //--------------------------------------------------------------------------------------
    UnloadTexture(texture);
    CloseWindow();        // Close window and OpenGL context
    //--------------------------------------------------------------------------------------

    return 0;
}
