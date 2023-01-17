#include <stdio.h>

void Swap(int *x,int *y);
int main(void)
{
	int a=3,b=4;
	printf("before:a=%d,b=%d\n",a,b);
	Swap(&a,&b); 
	printf("after:a=%d,b=%d\n",a,b);
    return 0;
}
void Swap(int *x,int *y)
{
	int temp=*x;
	*x=*y;
	*y=temp;
}
