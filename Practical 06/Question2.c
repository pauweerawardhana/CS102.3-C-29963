#include <stdio.h>

int main()
{
    int size,array1[size], array2[size], scalarSum = 0, vectorSum[size];

    printf("Enter the size of the arrays: ");
    scanf("%d", &size);

    printf("Enter %d integer values for the first array:\n", size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &array1[i]);
        scalarSum += array1[i];
    }


    printf("Enter %d integer values for the second array:\n", size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &array2[i]);
        scalarSum += array2[i];
    }


    for (int i = 0; i < size; i++)
    {
        vectorSum[i] = array1[i] + array2[i];
    }


    printf("Scalar Sum: %d\n", scalarSum);


    printf("Vector Sum:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", vectorSum[i]);
    }

}
