#include <stdio.h>

int main(void){
    int a=0,b=0,c=0;
    float d=0;
    printf("Enter three integer:");
    scanf("%d %d %d",&a,&b,&c);
    d=(float)(a+b+c)/3;
    printf("SUM = %4d\nAVERAGE = %.2f  REMAINDER = %3d\n",(a+b+c),d,(a+b+c)%3);
    
    return 0;
}
