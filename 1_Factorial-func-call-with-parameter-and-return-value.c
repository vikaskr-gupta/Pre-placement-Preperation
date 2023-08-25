#include<stdio.h>
int factorial(int n){
    int i, fact=1;
    for(i=1;i<=n;i++){
        fact=fact*i;
    } 
    return fact;
}

void main(){
    int i, num, fact;
    printf("Enter a number: \n");
    scanf("%d", &num);
    fact=factorial(num);
    printf("%d", fact);
}