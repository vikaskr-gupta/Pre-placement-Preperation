#include<stdio.h>

int fibonacii(int num, int n1, int n2){
    int i, n3;
    for(i=2; i<num; i++){
        n3=n1+n2;
        printf("%d\t", n3);
        n1=n2;
        n2=n3;
    }
}

void main(){
    int num, n1, n2, i;
    n1=0;
    n2=1;
    printf("Enter the number of element: \n");
    scanf("%d", &num);
    printf("%d\t%d\t", n1, n2);
    fibonacii(num, n1, n2);
}