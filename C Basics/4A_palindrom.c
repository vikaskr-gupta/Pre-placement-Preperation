#include <stdio.h>
#include <string.h>

void main()
{
    int i, l;
    char str[20];
    printf("Enter a string: \n");
    gets(str);
    l = strlen(str);
    for (i = 1; i < (l / 2); i++)
    {
        if (str[i] != str[l - i- 1])
        {
            printf("Not a palindrom...\n");
            break;
        }
    }
    if (i == l / 2)
    {
        printf("A Palindrom!\n");
    }
}