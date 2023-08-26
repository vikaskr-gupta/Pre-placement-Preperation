//Capitalize the kth character of the given string
#include<stdio.h>
#include<string.h>

void main(){
    char str[20];
    int i, pos, len;
    printf("Enter a string: \n");
    gets(str);
    printf("Enter a position: \n");
    scanf("%d", &pos);
    len = strlen(str);
    for(i=0; i<=len; i++){
        if(pos==i){
            str[i]=str[i]-32;
        }
    }
    printf("Update stroing is : %s", str);

}