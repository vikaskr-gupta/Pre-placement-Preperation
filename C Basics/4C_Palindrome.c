#include <stdio.h>

void main(){
    char str[20];
    int i, l, len=0, count=0;
    printf("Enter a string: \n");
    gets(str);
    for(i=0; str[i]!='\0'; i++){
        len++;
    }
    for (i = 1; i < (len / 2); i++)
    {
        if (str[i] != str[len - i- 1])
        {
            printf("Not a palindrom...\n");
            break;
        }
    }
    if (i == len / 2)
    {
        printf("A Palindrom!\n");
    }
}