#include <stdio.h>
int main(void){
    int a,b1,b2;
    printf("please input n:\n");
    scanf("%d",&a);
    b2=a%100;
    b1=(a-b2)/100;
    printf("%d,%d\n",b1,b2);
    printf("sum=%d,sub=%d,multi=%d\n",b1+b2,b1-b2,b1*b2);
    if(b2!=0){
        //b1=0-b1;
        //b2=0-b2;
     printf("dev=%.2f,mod=%d\n",(float)b1/b2,b1%b2);
    } else {
        printf("the second operater is zero!\n");
    }
    return 0;
}
