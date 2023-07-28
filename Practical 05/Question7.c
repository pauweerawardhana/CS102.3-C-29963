#include <stdio.h>
int main ()
{
int n = 10, no1 = 0,  no2 = 1, nextno;

    printf("Fibonacci Sequence (first %d numbers):\n", n);

    printf("%d\n %d\n", no1, no2);

    for (int i = 3; i <= n; i++)
  {
        nextno = no1 + no2;
        printf("%d\n", nextno);

        no1 = no2;
        no2 = nextno;
    }

}
