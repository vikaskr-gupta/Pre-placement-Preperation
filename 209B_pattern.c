#include<stdio.h>
void main(){
    int i, j, k, n, l=1;
    char ch='A';
    printf("Enter the number: \n");
    scanf("%d", &n);
    for(i=1; i<=n; i++){
        for(j=n; j>=i; j--){
            printf(" ");
        }
        for(k=1; k<=i; k++){
            if(k%2==0){
                printf(" %c ", ch);
                ch++;
            }
            else{
                printf(" %d ", l);
                l++;
                
            }
        }
        printf("\n");
    }
}