#include <stdio.h>
#include <limits.h> // For INT_MAX, INT_MIN etc.
#include <float.h>  // For FLT_MAX, DBL_MAX etc.

int main() {
    printf("Sizes of data types:\n");
    printf("Size of char: %zu byte(s)\n", sizeof(char));
    printf("Size of int: %zu byte(s)\n", sizeof(int));
    printf("Size of short int: %zu byte(s)\n", sizeof(short int));
    printf("Size of long int: %zu byte(s)\n", sizeof(long int));
    printf("Size of long long int: %zu byte(s)\n", sizeof(long long int)); // C99 standard
    printf("Size of float: %zu byte(s)\n", sizeof(float));
    printf("Size of double: %zu byte(s)\n", sizeof(double));
    printf("Size of long double: %zu byte(s)\n", sizeof(long double));
    printf("Size of unsigned short int: %zu byte(s)\n", sizeof(unsigned short int) );
    printf("Size of unsigned long int : %zu byte(s)\n", sizeof(unsigned long int));

    printf("\nRanges for integer types (example):\n");
    printf("Min int: %d\n", INT_MIN);
    printf("Max int: %d\n", INT_MAX);
    printf("Max unsigned int: %u\n", UINT_MAX); // %u for unsigned int

    printf("\nRanges for floating-point types (example):\n");
    printf("Max float: %e\n", FLT_MAX);  // %e for scientific notation
    printf("Max double: %e\n", DBL_MAX);

    return 0;
}
