#include <stdio.h>
#include <math.h>

int main(void){
     int money=0,year=0;
    double rate=0,sum=0,a=0;
    printf("Enter money:");
    scanf("%d",&money);
    printf("Enter year:");
    scanf("%d",&year);
    printf("Enter rate:");
    scanf("%lf",&rate);
    a=pow((1+rate),year); 
    printf("sum = %.2f\n",a*money);
    
    return 0;
}
