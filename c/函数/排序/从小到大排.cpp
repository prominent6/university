//将最大值移到倒数第一个、倒数第二个... 
#include <stdio.h>
#define N 4
void Fun(int a[],int n)
{
	int i,j,t;
	for(i=0;i<=n-2;i++)
	{
		for(j=0;j<=n-2-i;j++)
		{
			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
}
int main(void)
{
	int a[N]={8,9,6,5}; 
	Fun(a,N);
	for(int i=0;i<N;i++)
	{
		printf("%d",a[i]);
	}
	
}
