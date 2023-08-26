// aaaaa
// BBBBB
// ccccc
// DDDDD
// eeeee

#include <stdio.h>
void main()
{
    char i, j;
    int n;
    printf("Enter the number of rows and columns: \n");
    scanf("%d", &n);
    for (i=1; i<=n; i++){
        for(j=1; j<=n; j++){
            if(i%2==0){
                printf("%c", 64+i);
            }
            else{
                printf("%c", 96+i);
            }
        }
        printf("\n");
    }
}