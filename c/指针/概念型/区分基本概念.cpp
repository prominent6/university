#include <stdio.h>
int main(void){
	int a=0,b=1;
	char c='A';
	int *pa=&a,*pb=&b;
	char *pc=&c;
	printf("a is %d,&a is %p,pa is %p,*pa is %d\n",a,&a,pa,*pa);
}
