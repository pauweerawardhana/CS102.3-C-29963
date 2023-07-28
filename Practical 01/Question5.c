#include <stdio.h>

int main()
{
    float no1, no2, avg, total;

    printf("Enter First Number: \n");
    scanf("%f", &no1);
    printf("Enter Second Number: \n");
    scanf("%f", &no2);

    total = no1 + no2;
    avg = total / 2;

    printf("The average is : %.2f", avg);
}
