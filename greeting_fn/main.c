 #include <stdio.h>
 #include <string.h>

void greetUser(void);

int main(void)
{	
	greetUser();
	return 0;
}

void greetUser(void)
{
        char name[20];
	 //prompting user for name
	printf("What is your name?\n");
	 //storing the name in "name" variable
	fgets(name,sizeof(name),stdin);
	 //this line here is super important because if this isn't here then
	 //the output would print the newline character too stored in fgets
	 name[strcspn(name, "\n")] = '\0';
	 //printing the name
	printf("Hello, %s! Welcome to the function world",name);
} 


/* 
 * my first try , it worked but the final message was like 
 * Hello, name 
! Welcome to the function world 
this was because the fgets newline character printed too
this means we should always take care of newline character and in fgets case even getchar()
can't eat the newline character as it did with scanf()

 #include <stdio.h>

void greetUser(void);

int main(void)
{	
	greetUser();
	return 0;
}

void greetUser(void)
{
        char name[20];
	printf("What is your name?\n");
	fgets(name,sizeof(name),stdin);
	printf("Hello, %s ! Welcome to the function world",name);
} 
*/
