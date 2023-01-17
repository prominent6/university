#include <stdio.h>
#include <math.h>

int main(void){
    double a=0,b=0,c=0,s=0;
    printf("Input a,b,c:");
    scanf("%lf,%lf,%lf",&a,&b,&c);
    s=(a+b+c)/2;
    
    if((a+b>c)&&(a+c>b)&&(b+c>a)) {
        printf("area=%.2f",sqrt(s*(s-a)*(s-b)*(s-c)) );
    } else{
        printf("Input error!");
    }
        return 0; 
}
