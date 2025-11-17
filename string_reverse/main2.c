#include <stdio.h>
#include <string.h>

int main() {
    // Declare a char array to hold the input string (max 99 characters + null terminator)
    char input_string[100];
    printf("Enter a string (max 99 characters):\n");
    // Read the string from user input
    fgets(input_string, sizeof(input_string), stdin);
    // Remove the trailing newline character, if present
    input_string[strcspn(input_string, "\n")] = '\0';
    printf("Original string: %s\n", input_string);

    // Calculate the length of the input string
    int str_length = strlen(input_string);
    // Create a new char array for the reversed string (+1 for null terminator)
    char reversed_string[str_length + 1];

    // Use two indices: i for input_string (from end to start), j for reversed_string (from start to end)
    int j = 0;
    for (int i = str_length - 1; i >= 0; --i) {
        reversed_string[j] = input_string[i];
        j++;
    }
    // Null-terminate the reversed string
    reversed_string[j] = '\0';
    // Print the reversed string
    printf("Reversed string: %s\n", reversed_string);

    return 0;
} 