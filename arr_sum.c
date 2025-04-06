#include <stdio.h>

int main()
{

    int size, i, total=0;

    printf("Enter the size of array:");
    scanf("%d", &size);

    int arr1[size], arr2[size], arr3[size];
    printf("Enter elements of the array:");

    for(i=0; i<size; i++)
    {
        scanf("%d %d", &arr1[i], &arr2[i]);
    }

    for(i=0; i<size; i++)
    {
        arr3[i]=arr1[i]+arr2[i];
        printf("The sum of %d + %d = %d\n", arr1[i], arr2[i], arr3[i]);
    }

    return 0;
}
