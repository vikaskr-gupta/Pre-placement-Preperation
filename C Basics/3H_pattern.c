// 5       4       3       2       1
// 5       4       3       2
// 5       4       3
// 5       4
// 5

#include<stdio.h>
void main(){
    int i, j, n;
    printf("Enter the number: \n");
    scanf("%d", &n);
    for(i=1; i<=n; i++){
        for(j=n; j>=i; j--){
            printf("%d\t", j);
        }
        printf("\n");
    }
}