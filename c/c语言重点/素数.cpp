#include <stdio.h>

int sushu(int i);
int main(void)
{
	for(int i=2;i<=100;i++)
	{
		if(sushu(i)) printf("%d\n",i);
	}
	return 0;
}
int sushu(int i)
{
	for(int j=2;j<i/2;j++)
	{
		if(i%j==0) return 0;
	}
}
