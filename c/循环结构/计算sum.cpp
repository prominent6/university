#include <stdio.h>
#include <math.h>
int main(void){
    int count=0;
    float sum=1.0,j=0;
    //错误写法：解题错误 for(int i=1.0;i>=1e-6;i+=2,count++){
    for(int i=1;1.0/(i+2)>=1e-6;i+=2,count++){
        if(count%2==0){
            j=-1.0/(i+2);
        } else {
            j=1.0/(i+2);
        } 
        sum =+j;
    }
     
     
     
//    float sum = 0;
//    int i=1 , j = 0  ;     //  用j控制正负
//    for(i=1; 1.0/(2*i-1)>1e-6;i++)
//    {
//        sum +=  pow(-1,j)*(1.0/(2*i-1));
//        j++;
//    }
    //初次错误：没有输出
	printf("sum=%.3f\n",sum); 
    return 0;
}
