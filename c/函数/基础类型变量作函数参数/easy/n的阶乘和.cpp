#include <stdio.h>
long Fact(int n);

int main(void){
	int n; 
	printf("Input n(n>0):");
	scanf("%d",&n);
	printf("sum = %d\n",Fact(n));
	return 0;
}
long Fact(int n){
	int mul=1,sum=0;
	for(int i=1;i<=n;i++){
		mul=1;  //
		for(int j=1;j<=i;j++){
			mul*=j;
		}
		sum+=mul;
	}
	return sum;
}
