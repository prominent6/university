#include <stdio.h>
#include <math.h>

int main(void){
    int days=0;
    float l=0;
    printf("Input length and days:");
    scanf("%f,%d",&l,&days);
    
    printf("length=%.5f\n",(float)l/pow(2,days));
    
    return 0;
    
}
