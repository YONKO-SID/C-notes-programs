/*SO THIS IS NOT THE CORRECT CODE FOR THE PROBLEM BUT IT ALSO WORKS IF ALL YOU WANT TO DO IS REVERSE A STRING
SEEING HOW THIS WORKS IS ALSO IMPORTANT BECAUSE IT TEACHES US HOW WE CAN ACHEIVE SAME OUTPUT THROUGH DIFFERENT METHODS
THE CORRECT VERSION IS IN main2.c*/
#include <stdio.h>
#include <string.h>
int main() {
    //setting up the string
    char input_string[100];
    printf("enter a string(max 99 characters)\n");
    //getting the string
    fgets(input_string, sizeof(input_string), stdin);
    //removing the newline
    input_string[strcspn(input_string, "\n")] = '\0';
    //printing the given string
    printf("string: %s \n", input_string);
    // making a string length variable using strlen
    int str_length = strlen(input_string);
    // using that same output of strlen and adding +1 for the null terminator in reverse string
    char reverse_string[str_length + 1];
    // using a for loop to reverse the string
    // this actually works because it prints the first array letter everytime so it prints the string backwards
    for (int i = str_length - 1; i >= 0 ; --i)
    {
        reverse_string[0] = input_string[i];
        printf("%s",reverse_string);
    }
    printf("\n");
    return 0; 
}   