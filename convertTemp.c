/*
 * convert temperature between Celsius and Fahrenheit
 */
#include <stdio.h>

int main() {
    double celsius, fahrenheit;

    printf("Enter the temperature in celsius: ");
    scanf("%lf", &celsius);
    fahrenheit = celsius * 9.0 / 5.0 + 32.0;
    printf("%.2lf degree C is %.2lf degree F.\n\n", celsius, fahrenheit); // %.lf prints a double with 2 decimal places

    printf("Enter the temperature in fahrenheit: ");
    scanf("%lf", &fahrenheit);
    celsius = (fahrenheit - 32.0) * 5.0 / 9.0;
    printf("%.2lf degree F is %.2lf degree C.\n\n", fahrenheit, celsius); // Another \n to add a new line between the previous message and this one. Run the program to see it

    return 0;
}
