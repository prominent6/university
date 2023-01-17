#include <stdio.h>
#include <math.h>

int main(void){
    int x;
    printf("Input x: ");
    scanf("%d",&x);
    if(x>0){
        printf("y=%.2f\n",exp(-(double)x));
    } else if(x==0){
        printf("y=1");
    } else if(x<0){
        printf("y=%.2f\n",-exp((double)x));
    }
    return 0;
}
