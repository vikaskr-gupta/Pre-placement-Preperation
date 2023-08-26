#include <stdio.h>
#include <string.h>
void main()
{
    int i, len, left, right;
    char str[200], temp;
    printf("Enter a string: \n");
    gets(str);
    len = strlen(str);
    left = 0;
    right = len - 1;
    for (i = left; i <= right; i++)
    {
        temp = str[i];
        str[i] = str[right];
        str[right] = temp;
        right--;
    }
    printf("%s", str);
}