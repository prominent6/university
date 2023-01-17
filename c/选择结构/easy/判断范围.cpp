#include <stdio.h>

int main(void){
	int n=0;
	printf("Please enter the number:\n");
	scanf("%d",&n);
	
	if(n>0 && n<=9) {
		printf("%d: 0-9\n",n);
	} else if(n>=10 && n<=99) {
		printf("%d: 10-99\n",n);
	} else if(n>=100 && n<=999) {
		printf("%d: 100-999\n",n);
	} else if(n>=1000 && n<10000){
		printf("%d: 1000-9999\n",n);
	} else {
		printf("error!\n");
	}
	return 0;
}
