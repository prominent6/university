#include <stdio.h>
#define N 5

int fun(int a[],int n);
int main(void)
{
	int a[N]={2,5,8,7,4};
	fun(a,N);
	for(int i=0;i<N;i++)
	{
		printf("%d",a[i]);
	}
}
int fun(int a[],int n)
{
	int temp,t;
	for(int i=0;i<=n-2;i++)
	{
		temp=i;
		for(int j=i+1;j<=n-1;j++)
		if(a[j]>a[temp]) temp=j;
		
		if(temp!=i)
		{
			t=a[i];
			a[i]=a[temp];
			a[temp]=t;
		}
	}
}
