#include<stdio.h>
int main()
{
    char empName[30];
    float basicSalary, newSalary, increment;

    printf("Enter employee name: ");
    scanf("%s", empName);

    printf("Enter basic salary: ");
    scanf("%f", &basicSalary);

    if (basicSalary < 5000)
   {
        increment = 0.05 * basicSalary;
    }
   else if (basicSalary >= 5000 && basicSalary < 10000)
   {
        increment = 0.10 * basicSalary;
    } else
   {
        increment = 0.15 * basicSalary;
    }

    newSalary = basicSalary + increment;

    printf("\nEmployee Name: %s\n", empName);
    printf("Basic Salary: $%.2f\n", basicSalary);
    printf("Increment: $%.2f\n", increment);
    printf("New Salary: $%.2f\n", newSalary);

}
