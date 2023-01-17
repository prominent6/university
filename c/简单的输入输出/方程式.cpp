#include <stdio.h>

int main(void){
    float a=0,y=0;
    printf("Please input x:\n");
    scanf("%f",&a);
    if(a<1)   y=a; 
  	else if(a>=1&&a<10)   y=(-1/a)-1;
    else if(a>=10)   y=5*a-11;

    printf("y=%.2f\n",y);
    
    return 0;
}
