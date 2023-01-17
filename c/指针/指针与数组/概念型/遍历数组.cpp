#include <stdio.h>
int main(void){
	int a[10];
	int *p;
	for(p=a;p<(a+10);p++){
		scanf("%d",p);
	}
	for(p=a;p<(a+10);p++){
		printf("%d",*p);
	}
	return 0;
} 
