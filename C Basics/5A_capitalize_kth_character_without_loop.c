// Capitalize the kth character of the given string
#include <stdio.h>
#include <string.h>
#include <conio.h>

void main()
{
    char str[200];
    int pos;
    printf("Enter a string: \n");
    gets(str);
    printf("Enter a position: \n");
    scanf("%d", &pos);
    str[pos - 1] = str[pos - 1] - 32;
    puts(str);
    getch();
}