#include <stdio.h>
#include <math.h>
int main(void){
	float n;
	double PI=0;
	printf("当公式的最后一项的绝对值小于n时停止计算:");
	scanf("%f",&n);
	for(int i=1;1/(double)(2*i-1)>=n;i++){
		PI+=pow(-1,i+1)/(double)(2*i-1);
	}
	printf("PI=%lf\n",4*PI);
	return 0;
}
