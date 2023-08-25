// *****
// *ABC*
// *DEF*
// *GHI*
// *****

#include <stdio.h>
void main()
{
    int i, j, n;
    // char k=1;
    char ch = 'A';
    printf("Enter the number of rows and columns: \n");
    scanf("%d", &n);
    for (i=1; i<=n; i++){
        for(j=1; j<=n; j++){
            if(i==1||i==n||j==1||j==n){
                printf("*");
            }
            else{
                // printf("%c", k+64);
                // k++;
                printf("%c", ch);
                ch++;
            }
        }
        printf("\n");
    }
    
}