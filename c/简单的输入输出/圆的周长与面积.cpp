#include <stdio.h>
#define P 3.14159

int main(void){
    double r=0,circum=0,area=0;
    printf("Input r:");
    scanf("%lf",&r);
    circum=2*P*r;
    area=P*r*r;
    printf("circum=%.2f\n",circum);
    printf("area=%.2f\n",area);
    
    return 0;
}

