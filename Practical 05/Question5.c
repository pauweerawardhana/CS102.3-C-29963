#include <stdio.h>
int main ()
{
int number, reverse = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &number);

    do
    {
        remainder = number % 10;
        reverse = reverse * 10 + remainder;
        number /= 10;
    } while (number != 0);

    printf("Reversed number: %d\n", reverse);

}
