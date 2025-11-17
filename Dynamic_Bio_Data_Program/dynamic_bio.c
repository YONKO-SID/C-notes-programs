#include <stdio.h>

int main(void) {
        char name[11]; // Max 10 chars + null terminator for the string
        int age;
        float height;
        char initial_letter;
        double net_worth;
        char favorite_letter;

        // --- Asking for data ---

        printf("What is your name?\n");
        // Corrected: Removed trailing space and \n. No & needed for array name 'name' with %s.
        scanf("%10s", name);
        // CRITICAL FIX: Clear the input buffer of the newline left by scanf("%s")
        while (getchar() != '\n');

        printf("What is your age?\n");
        // Corrected: Removed trailing space and \n
        scanf("%d", &age);
        // CRITICAL FIX: Clear the input buffer of the newline left by scanf("%d")
        while (getchar() != '\n');

        printf("What is your height? (e.g., 1.75)\n");
        // Corrected: Changed "%.3f" to "%f" for input, removed trailing space and \n
        scanf("%f", &height);
        // CRITICAL FIX: Clear the input buffer of the newline left by scanf("%f")
        while (getchar() != '\n');

        printf("What is your name's initial letter?\n");
        // This is where the homework explicitly asked for the getchar() trick
        // Corrected: Removed trailing space and \n. The getchar() loop handles leading whitespace/newline.
        scanf("%c", &initial_letter);
        // CRITICAL FIX: Clear the input buffer of the newline left by scanf("%c") (user presses Enter)
        while (getchar() != '\n');

        printf("What is your net worth? (e.g., 123456.78)\n");
        // Corrected: Removed trailing space and \n
        scanf("%lf", &net_worth);
        // CRITICAL FIX: Clear the input buffer of the newline left by scanf("%lf")
        while (getchar() != '\n');

        printf("What is your favourite letter?\n");
        // Another spot where getchar() trick is crucial
        // Corrected: Removed trailing space and \n. The getchar() loop handles leading whitespace/newline.
        scanf("%c", &favorite_letter);
        // CRITICAL FIX: Clear the input buffer of the newline left by scanf("%c") (user presses Enter)
        while (getchar() != '\n');

        // --- Displaying bio data ---
        printf("\n----- Your Bio Data -----\n");
        printf("NAME             : %s\n", name);
        printf("AGE              : %d\n", age);
        printf("HEIGHT           : %.3f meters\n", height); // Using %.3f for output formatting
        printf("INITIAL LETTER   : %c\n", initial_letter);
        printf("YOUR NET WORTH   : $%.2lf\n", net_worth); // Using %.2lf for currency display
        printf("FAVOURITE LETTER : %c\n", favorite_letter);

        return 0;
}


/*  MY FIRST TRY
 *
 *
 * #include <stdio.h>

int main(void) {
	char name[11];
	int age ;
	float height ;
	char initial_letter ;
        double net_worth ;
        char favorite_letter ;
	// asking for data
	printf("what is your name?\n") ;
        scanf("%10s \n",&name);
	printf("what is your age?\n") ;
        scanf("%d \n",&age);
       	printf("what is your height?\n") ;
        scanf("%.3f \n",&height );
      	printf("what is your name's initial letter?\n") ;
        scanf("%c \n",&initial_letter);
	printf("what is your net worth?\n") ;
        scanf("%lf \n",&net_worth);
	printf("what is your favourite letter? \n") ;
        scanf("%c \n",&favorite_letter);
     //now we will display bio data
      printf("-----your bio data is----- \n");
      printf("NAME : %s \n",name);
      printf("AGE : %d \n",age);
      printf("HEIGHT : %.3f \n" , height);
      printf("INITIAL LETTER : %c \n", initial_letter);
      printf("YOUR NET WORTH : %lf \n", net_worth);
      printf("YOUR FAVOURITE LETTER : %C \n",favorite_letter);
      return 0 ; 
 } */
