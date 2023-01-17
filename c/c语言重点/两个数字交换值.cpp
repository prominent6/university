#include <stdio.h>

int main(void){
    int a=0,b=0;
    printf("enter value for a and b:");
    scanf("%d %d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;

    printf("after sawpping the value of a and b: %d %d",a,b);
    
    return 0;
}
