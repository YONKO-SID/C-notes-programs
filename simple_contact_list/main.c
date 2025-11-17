#include <stdio.h>
#include <string.h>

int main(){
    char contact_names[3][50];
    char contact_numbers[3][15];

    // --- Input Loop ---
    for (int i = 0; i < 3; i++)
    {
        printf("Enter name for contact #%d: ", i + 1);
        fgets(contact_names[i], sizeof(contact_names[i]), stdin);

        // Find the position of the newline character.
        size_t name_newline_pos = strcspn(contact_names[i], "\n");
        if (contact_names[i][name_newline_pos] == '\n') {
            // If the character at that position is a newline, we found it. Replace it.
            contact_names[i][name_newline_pos] = '\0';
        } else {
            // If not, the input was too long. We must clear the leftover characters
            // from the input stream until we find the newline.
            int c; 
            // a loop to remove any extra character
            while ((c = getchar()) != '\n' && c != EOF);
        }

        printf("Enter phone number for %s: ", contact_names[i]);
        fgets(contact_numbers[i], sizeof(contact_numbers[i]), stdin);

        size_t num_newline_pos = strcspn(contact_numbers[i], "\n");
        if (contact_numbers[i][num_newline_pos] == '\n') {
            contact_numbers[i][num_newline_pos] = '\0';
        } else {
            int c;
            while ((c = getchar()) != '\n' && c != EOF);
        }

        printf("\n"); // Adding a blank line for better readability
    }

    printf("\n--- Contact List ---\n");
    for (int i = 0; i < 3; i++) {
        printf("%d. Name: %s, Phone: %s\n", i + 1, contact_names[i], contact_numbers[i]);
    }
    return 0;
}

/*
So , this was my first try but it had a bug that is , when the input number was exactly 14 numbers long the new line got
carried to next fgets call and the program behaved weridly , this was how it acted 
------------------------------------------------------------------------------------
Enter name for contact #1: siddharth                                               |
Enter phone number for siddharth: 74536547357634                                   |
                                                                                   |
Enter name for contact #2: Enter phone number for : shubham                        |
                                                                                   |
Enter name for contact #3: 23462523463254                                          |
Enter phone number for 23462523463254:                                             |
------------------------------------------------------------------------------------
#include <stdio.h>
#include <string.h>

int main(){
    char contact_names[3][50];
    char contact_numbers[3][15];

    // --- Input Loop ---
    for (int i = 0; i < 3; i++)
    {
        printf("Enter name for contact #%d: ", i + 1);
        fgets(contact_names[i], sizeof(contact_names[i]), stdin);
        // Using strcspn to find the newline and replace it with a null terminator.
        contact_names[i][strcspn(contact_names[i], "\n")] = '\0';

        printf("Enter phone number for %s: ", contact_names[i]);
        fgets(contact_numbers[i], sizeof(contact_numbers[i]), stdin);
        contact_numbers[i][strcspn(contact_numbers[i], "\n")] = '\0';
        printf("\n"); // Adding a blank line for better readability
    }

    printf("\n--- Contact List ---\n");
    for (int i = 0; i < 3; i++) {
        printf("%d. Name: %s, Phone: %s\n", i + 1, contact_names[i], contact_numbers[i]);
    }
    return 0;
}
    */