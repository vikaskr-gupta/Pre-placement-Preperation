#include<stdio.h>
void main(){
    int i, j, k, l, target, size, Arr[100], count=0;
    printf("Enter the size of an array:\n");
    scanf("%d", &size);
    printf("Enter the target:\n");
    scanf("%d", &target);
    printf("Enter Array:\n");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &Arr[i]);
    }
    printf("Array:\n");
    for (j = 0; j < size; j++)
    {
        printf("%d\t", Arr[j]);
    }
    printf("\n");
    for (k = 0; k < size; k++)
    {
        for (l = k + 1; l < size; l++)
        {
            if(Arr[k]+Arr[l]==target){
                count++;
            }
        }
    }
    printf("Total number of 2 sum is : %d", count);
}