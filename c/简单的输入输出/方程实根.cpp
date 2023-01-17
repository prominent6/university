#include <stdio.h>
#include <math.h>

int main(void){
	double a=0,b=0,c=0,p=0,q=0,x1=0,x2=0;
    
    printf("Please enter the coefficients a,b,c:");
    scanf("%lf,%lf,%lf",&a,&b,&c);
    p=-b/(2*a);
    q=sqrt(b*b-4*a*c)/(2*a);
    x1=p-q;
    x2=p+q;
    printf("x1=%7.4f\n,x2=%7.4f\n",x1,x2);
    return 0;
}
