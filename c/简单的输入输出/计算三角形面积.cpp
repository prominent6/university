#include <stdio.h>
#include <math.h>

int main(void){
    double a=0,b=0,c=0,area=0,s=0;
    printf("Input a,b,c:");
    scanf("%lf,%lf,%lf",&a,&b,&c);
    s=(a+b+c)/2;
    printf("area=%.2f\n",sqrt(s*(s-a)*(s-b)*(s-c)));
    
    return 0;
}
