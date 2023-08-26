#include <stdio.h>
#include <string.h>

void main()
{
    char str[20];
    int i, l, count=0;
    printf("Enter a String: \n");
    gets(str);
    l=strlen(str);
    for(i=0; i<l/2; i++)
    {
        if(str[i]==str[l-i-1])
        {
            count++;
        }
    }
    if(count==l/2)
    {
        printf("A Plaindrome!");
    }
}