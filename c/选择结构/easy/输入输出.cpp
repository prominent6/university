#include <stdio.h>
#include <math.h>

int main(void){
    float x;
    printf("Please input x:\n");
    scanf("%f",&x);
    if(x<0){
        printf("y = %.2f\n",3*x-1);
    } else if(x>=0&&x<10){
        printf("y = %.2f\n",exp(x));
    } else if(x>=10){
        printf("y = %.2f\n",x);
    }
    return 0;
}
