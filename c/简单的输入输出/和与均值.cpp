#include <stdio.h>

int main(void){
    float a=0,b=0,c=0;
    printf("请输入三个单精度数：");
    scanf("%f%f%f",&a,&b,&c);
    
    printf("三个数的和为%.2f，均值为%.2f",a+b+c,(a+b+c)/3);
    
}
