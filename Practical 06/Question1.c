#include <stdio.h>

int main()
{
    int arr[10], i, sum = 0, min, max;
    float avg;

    printf("Enter 10 integer values:\n");

    for (i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];

        if (i == 0)
        {
            min = max = arr[i];
        }
        else
        {
            if (arr[i] < min)
            {
                min = arr[i];
            }
            if (arr[i] > max)
            {
                max = arr[i];
            }
        }
    }


   avg = (float)sum / 10;


    printf("Minimum value: %d\n", min);
    printf("Maximum value: %d\n", max);
    printf("Average value: %.2f\n", avg);


    printf("Array in reverse order:\n");
    for (i = 9; i >= 0; i--) {
        printf("%d ", arr[i]);
    }

}
