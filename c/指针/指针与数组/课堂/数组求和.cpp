#include <stdio.h>
int main(void){
	short a[]={2,4,6,8,10};
	short y=0,*p;
	p=&a[0];
	for(int i=0;i<5;i++){
		y+=*(p+i);//p[i]
	}
	printf("%d\n",y);
	return 0;
} 
