//       1 
//      2  2 
//     3  3  3 
//    4  4  4  4 
//   5  5  5  5  5 

#include<stdio.h>
void main(){
    int i, j, k, n;
    printf("Enter the number: \n");
    scanf("%d", &n);
    for(i=1; i<=n; i++){
        for(j=n; j>=i; j--){
            printf(" ");
        }
        for(k=1; k<=i; k++){
            printf(" %d ", i);
        }
        printf("\n");
    }
}