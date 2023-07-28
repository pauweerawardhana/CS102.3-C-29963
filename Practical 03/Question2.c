#include<stdio.h>
int main()
{
int no1, no2, no3, largest, smallest ;

    printf("Enter the first number: ");
    scanf("%d", &no1);

    printf("Enter the second number: ");
    scanf("%d", &no2);

    printf("Enter the third number: ");
    scanf("%d", &no3);

    largest = no1;  // Think that the first number is the largest
    smallest = no1; // Think that the first number is the smallest

    if (no2 > largest)
     {
      largest = no2;
                   }
    if (no3 > largest)
     {
        largest = no3;
    }

    if (no2 < smallest) {
        smallest = no2;
    }

    if (no3 < smallest) {
        smallest = no3;
    }

    printf("The largest number is: %d \n", largest);
    printf("The smallest number is: %d \n", smallest);

}
