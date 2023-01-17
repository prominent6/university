#include <stdio.h>
int main(void){
	int a[]={1,2,3,4,5};
	int *p=NULL;
	p=a;
	printf("%d ",*p);    //1    p=0
	printf("%d ",*(++p)); //2   p=1
	printf("%d ",*++p); //3    p=2
	printf("%d ",*(p--)); //3  p=2
	printf("%d ",*p++); //2  p=1
	printf("%d ",*p); //3  p=3
	printf("%d ",++(*p)); //4   p=3
	printf("%d ",*p); //4   p=4
	return 0;
} 

//*p++ 与(*P)++ 前者为p当前
//*a+i 与*(a+i) 
