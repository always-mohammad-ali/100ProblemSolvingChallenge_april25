#include <stdio.h>
int main()
{
    int size, i;
    printf("Enter the size of array: ");
    scanf("%d", &size);

    float array[size];
    float max_num = array[0];

    printf("Enter the element of the array:");

    for(i=0; i<size; i++)
    {
        scanf("%f", &array[i]);
    }
    for(i=0; i<size; i++)
    {
        if(array[i]>max_num)
        {
            max_num=array[i];
        }
    }
    printf("The largest value is:%.2f", max_num);


    return 0;
}
