#include <stdio.h>

float celsiusToFahrenheit(float);

int main()
{
            float temp_celsius , temp_fahrenheit;
	    printf("Give the temperature in celsius :  \n");
	    scanf("%f", &temp_celsius);
	    temp_fahrenheit = celsiusToFahrenheit(temp_celsius);
	    printf("Temperature in celsius: %.2f \n", temp_celsius);
	    printf("Temperature in Fahrenheit: %.2f\n", temp_fahrenheit);
	    return 0;
}

float celsiusToFahrenheit(float temp)
{
        float temp_fa;
	temp_fa = (temp*9/5) + 32;
	return temp_fa;
}
