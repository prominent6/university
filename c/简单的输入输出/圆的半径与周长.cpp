#include <stdio.h>
#define PI 3.14

int main(void){
    float r=0,area=0,c=0;
    printf("请输入半径的值：");
    scanf("%f",&r);
    c=2*PI*r;
    area=2*PI*r*r;
    printf("半径为%5.2f的圆的面积为%5.1f,圆的周长为%5.1f\n",r,area,c);
    
    return 0;
}
