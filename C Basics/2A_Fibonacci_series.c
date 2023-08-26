#include<stdio.h>
void main(){
    int num, n1, n2, n3, i;
    n1=0;
    n2=1;
    printf("Enter the number of element: \n");
    scanf("%d", &num);
    printf("%d\t%d\t", n1, n2);
    for(i=2; i<num; i++){
        n3=n1+n2;
        printf("%d\t", n3);
        n1=n2;
        n2=n3;
    }
}