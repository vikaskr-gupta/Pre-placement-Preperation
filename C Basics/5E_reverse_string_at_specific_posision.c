#include <stdio.h>
#include <conio.h>
void main()
{
    int i, j, k, l, target, position, size, Arr[100];
    printf("Enter the size of an array:\n");
    scanf("%d", &size);
    printf("Enter the position of an array:\n");
    scanf("%d", &position);
    printf("Enter Array:\n");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &Arr[i]);
    }
    printf("Array:\n");
    for (i = 0; i < size; i++)
    {
        printf("%d\t", Arr[i]);
    }
    printf("\n");
    // for(j=0; j<position; j++){
    //     printf("%d\t", Arr[j]);
    // }
    // for(k=size-1; k>=position; k--){
    //     printf("%d\t", Arr[k]);
    // }
    //We can use the below code for better optimization
    for (k = position; k < size; k++)
    {
        for (l = k + 1; l < size; l++)
        {
            int temp = Arr[k];
            Arr[k] = Arr[l];
            Arr[l] = temp;
        }
    }
    printf("Array:\n");
    for (i = 0; i < size; i++)
    {
        printf("%d\t", Arr[i]);
    }
}