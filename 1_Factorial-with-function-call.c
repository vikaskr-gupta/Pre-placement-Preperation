#include<stdio.h>
void factorial(){
    int i, num, fact=1;
    printf("Enter a number: \n");
    scanf("%d", &num);
    for(i=1;i<=num;i++){
        fact=fact*i;
    } 
    printf("%d", fact);
}

void main(){
    factorial();
}