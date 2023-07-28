#include <stdio.h>
int main ()
{
int no,  factorial = 1;

    printf("Enter a number: ");
    scanf("%d", &no);

    if (no < 0)
   {
    printf("Factorial is not defined for negative numbers.\n");
    }
    else

    for (int i = no; i >= 1; i--)
    {
    factorial *= i;
    }

  printf("Factorial of %d is %d\n", no, factorial);


}
