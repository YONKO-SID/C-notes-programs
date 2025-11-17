#include <stdio.h>
#include <string.h>

// initializing function
int countChar(char * FIRST, char character);

int main(void){
	char string[150];
	int number;
	printf("Enter the string\n");
	fgets(string,sizeof(string),stdin);
	char initial;
	printf("The character you wanna search\n");
	scanf("%c",&initial);
    number = countChar(string,initial);
    printf("The character %c appears %d times\n",initial,number);

return 0;
}

int countChar(char * FIRST,char character){
	// making a temp pointer 
char *ptr = FIRST;
int count =0;
// making sure loop runs until '\0'
while (*ptr != '\0'){
	if (*ptr == character){
		// we don't need a for loop just to increment it we can do it like this too
		count++;
	}
	ptr++;
}
return count;
}