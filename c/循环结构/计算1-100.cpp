#include <stdio.h>
int main(void){
	int sum=0;
	int i=1;
	int j=100;
	for(;i<=50;i++,j--){
		sum+=i+j;
	}
	printf("sum=%d\n",sum);
	return 0;
}
