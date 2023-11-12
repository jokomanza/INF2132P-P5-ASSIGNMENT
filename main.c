#include <stdio.h>

int main() {
    printf("NIM: 231110062\n");
    printf("Name: Joko Supriyanto\n");

    /* declaration */
    int number1, number2, addition, subtraction, multiplication, modulus;
    float division;

    /* input  */
    printf("Input number 1: ");
    scanf("%d", &number1);
    printf("Input number 2: ");
    scanf("%d", &number2);

    /* operations/process */
    addition = number1 + number2;
    subtraction = number1 - number2;
    multiplication = number1 * number2;
    division = (float) number1 / (float) number2;
    modulus = number1 % number2;

    /* output */
    printf("Additions between %d and %d is %d \n", number1, number2, addition);
    printf("Subtraction between %d and %d is %d \n", number1, number2, subtraction);
    printf("Multiplication between %d and %d is %d \n", number1, number2, multiplication);
    printf("Division between %d and %d is %.2f \n", number1, number2, division);
    printf("Modulus between %d and %d is %d \n", number1, number2, modulus);

    return 0;
}