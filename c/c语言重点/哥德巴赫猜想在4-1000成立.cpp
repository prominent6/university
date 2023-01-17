#include <stdio.h>
#include <math.h>

int prime(int n);  //判断素数
void Goldbach(int even);//分解 
int main(void){
	for(int i=4;i<1000;i++)
	{
		Goldbach(i);
//因为结果过多，中间停顿一次，目的试试将结果分开输出，按回车键继续 
		if(i%50==0)
		{
			puts("press\'enter\'to continue");
			getchar();
		}
	}
}
int prime(int n)
{
	for(int i=2;i<=sqrt(n);i++)
	{
		if(n%i==0) return 0;
	}
}
void Goldbach(int even)
{
	int m,n;
	for(m=2;m<=even/2;m++)
	{
		n=even-m;
		if(prime(m)&&prime(n))
		{
			printf("%d=%d+%d\n",even,m,n);
			return;
		}
	}
} 
