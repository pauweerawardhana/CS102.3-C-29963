#include <stdio.h>
int main ()
{
    int marks[10], i, total = 0;
    float avg;

    printf("Enter the marks of 10 subjects: \n");

    for (i = 0; i < 10; i++)
   {
        printf("Subject %d: ", i + 1);
        scanf("%d", &marks[i]);
        total += marks[i];
    }

    avg = (float) total / 10.0;

    printf("Total marks: %d\n", total);
    printf("Average marks: %.2f\n", avg);

    if (avg < 50.0)
    {
        printf("Fail!\n");
    }
     else
     {
        printf("Pass!\n");
     }

}
