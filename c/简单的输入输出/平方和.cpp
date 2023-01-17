#include <stdio.h>
#include <math.h>

int main(void){
    double a=0,b=0;
    printf("Please input x and y:\n");
    scanf("%lf,%lf",&a,&b);
    
    printf("result=%.2f\n",pow(a,2)+pow(b,2));
    
    return 0;
}
