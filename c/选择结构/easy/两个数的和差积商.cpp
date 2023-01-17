#include <stdio.h>

int main(void){
    float a=0,b=0;
	 
    printf("\n请输入两个数:\n");
    scanf("%f %f",&a,&b);
    printf("和为:%.2f\n",a+b);
    printf("差为:%.2f\n",a-b);
    printf("积为:%.2f\n", a*b);
    printf("商为:%.2f\n", a/b);
    printf("余数为:%d\n", (int)a%(int)b);
    
    return 0;
    
}
