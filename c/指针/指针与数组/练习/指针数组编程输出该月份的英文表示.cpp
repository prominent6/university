#include <stdio.h>
#define N 13
int main(void){
	int n,i;
	printf("Input month number:");
	scanf("%d",&n);
	char str[N][20]={"Illegal month", "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
	char *pStr[N];
	for(i=0;i<N;i++){
		pStr[i]=str[i];
	}
	if(n<0||n>12){
		printf("%s",pStr[0]);
	}else{
		printf("month %d is %s\n",n,pStr[n]);
	}
	return 0;
}
