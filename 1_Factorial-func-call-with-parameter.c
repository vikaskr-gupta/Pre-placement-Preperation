#include<stdio.h>
void factorial(int n){
    int i, fact=1;
    for(i=1;i<=n;i++){
        fact=fact*i;
    } 
    printf("%d", fact);
}

void main(){
    int i, num;
    printf("Enter a number: \n");
    scanf("%d", &num);
    factorial(num);
}