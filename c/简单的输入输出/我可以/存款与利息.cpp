#include <stdio.h>
#include <math.h>

int main(void){
    int y=0;
    double l=0;
    printf("Please enter year,capital:");
    scanf("%d,%lf",&y,&l);
    double arr[5]= {0.0225,0.0243,0.0270,0.0288,0.03};
    
    if(y==1){
        printf("rate = %lf, deposit = %lf\n",arr[0],l*pow(1+arr[0],y));
    } else if(y==2){
        printf("rate = %lf, deposit = %lf\n",arr[1],l*pow(1+arr[1],y));
    } else if(y==3){
        printf("rate = %lf, deposit = %lf\n",arr[2],l*pow(1+arr[2],y));
    } else if(y==5){
        printf("rate = %lf, deposit = %lf\n",arr[3],l*pow(1+arr[3],y));
    } else if(y==8){
        printf("rate = %lf, deposit = %lf\n",arr[4],l*pow(1+arr[4],y));
    } else {
        printf("Error rate!\n");
    }
    return 0;
}
