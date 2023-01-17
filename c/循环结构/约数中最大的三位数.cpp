#include <stdio.h>
int main(void){
	int n;
	printf("Please input number");
	scanf("%d",&n);
	for(int i=999.0;i>99.0;i--){
		if(n%i==0){
			printf("The max factor with 3 digits in %ld is %d.\n",n,i);
			break;
		}
	}
	return 0;
}
