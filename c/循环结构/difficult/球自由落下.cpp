#include <stdio.h>

int main(void){
    float sum=100,i=sum/2; //i=50
    for(int j=2;j<10;j++){
	    sum+=(2*i);
        i=i/2;
    }
    printf("第10次落地时共经过%f米。\n"  "第10次反弹%f米。\n",sum,i);
    return 0;
    
}
