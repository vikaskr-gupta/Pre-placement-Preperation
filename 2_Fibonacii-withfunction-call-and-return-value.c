#include<stdio.h>

int fibonacii(int n1, int n2){
    int nxt;
        nxt=n1+n2;
        return nxt;
}

void main(){
    int num, n1, n2, i, nxt;
    n1=0;
    n2=1;
    printf("Enter the number of element: \n");
    scanf("%d", &num);
    printf("%d\t%d\t", n1, n2);
    for(i=2; i<num; i++){
        nxt=fibonacii(n1, n2);
        printf("%d\t", nxt);
        n1=n2;
        n2=nxt;
    }
}