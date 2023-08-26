#include<stdio.h>
#include<string.h>
void main(){
    int i, n;
    char str[200];
    printf("Enter a string: \n");
    gets(str);
    n=strlen(str);
    for(i=n; i>=0; i--){
        printf("%c", str[i]);
    }
}