// 1       2       3       4       5
// 1       2       3       4
// 1       2       3
// 1       2
// 1


#include<stdio.h>
void main(){
    int i, j, n;
    printf("Enter the number: \n");
    scanf("%d", &n);
    for(i=1; i<=n; i++){
        for(j=1; j<=n-i+1; j++){
            printf("%d\t", j);
        }
        printf("\n");
    }
}