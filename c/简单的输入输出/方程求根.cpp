#include <stdio.h>
#include <math.h>

int main(void){
    float a=0,b=0,c=0,d=0,p=0,q=0;
    printf("Please enter the coefficients a,b,c:");
    scanf("%f,%f,%f",&a,&b,&c);
    d=b*b-4*a*c;
    p=-b/(2*a);
    q=sqrt(fabs(d))/(2*a);
    
    if(a==0){
        printf("It is not a quadratic equation!\n");
        
        return 0;
    }
    
    if(d==0) {
        printf("x1 = x2 = %.2f\n",p);
    } else {
    	if(d>0){
        printf("x1 = %.2f, x2 = %.2f/n",p+q,p-q);     
         } else {
        printf("x1 = %.2f+%.2fi, x2 = %.2f-%.2fi\n",p,q,p,q);
        } 
    }
    return 0;
    
}
