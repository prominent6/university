#include <stdio.h>
#define N 4
int fun(int a[],int n);
int main(void)
{
	int a[N]={4,3,8,5};
	fun(a,N);
	for(int i=0;i<N;i++)
	{
		printf("%d",a[i]);
	 } 
	 return 0;
}

//int fun(int a[],int n)
//{
//	int temp;
//	for(int i=0;i<=n-2;i++)
//	{
//		for(int j=0;j<=n-2-i;j++)
//		{
//			if(a[j]>a[j+1])
//			{
//				temp=a[j];
//				a[j]=a[j+1];
//				a[j+1]=temp;
//			}
//		}
//	}
//}

int fun(int a[],int n)
{
	int temp,t;
	for(int i=0;i<=n-2;i++)
	{
		temp=i;
		for(int j=i+1;j<=n-1;j++)
		if(a[j]<a[temp]) temp=j;
		
		if(temp!=i) 
		{
			t=a[i];
			a[i]=a[temp];
			a[temp]=t;
		}
	}
}
