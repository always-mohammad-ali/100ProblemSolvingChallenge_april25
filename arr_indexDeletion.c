#include <stdio.h>

int main()
{
    int size, i, indexNo;

    printf("Enter the size of array: ");

    scanf("%d", &size);

    int array[size];

    printf("Enter elements of the array:");

    for(i=0; i<size; i++)
    {
        scanf("%d", &array[i]);
    }

    printf("Enter the index no for deletion(0 to %d)", size-1);
    scanf("%d", &indexNo);

    for(i=indexNo; i<size-1; i++)
    {
        array[i]=array[i+1];
    }
    size--;

    printf("New array looks like: ");
    for(i=0; i<size; i++)
    {
        printf("%d\n", array[i]);
    }


    return 0;
}
