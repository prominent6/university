#include <stdio.h>
#define N 5
void Fun(int a[],int n);
int main(void) 
{
	int a[N]={2,7,6,5,8};
	Fun(a,N);
	for(int i=0;i<N;i++)
	{
		printf("%-4d",a[i]);
	}
	return 0;
}
void Fun(int a[],int n)
{
	int i,j,temp_i,t;
	for(j=0;j<n-2;j++)
	{
		temp_i=j;
		for(i=j+1;i<=n-1;i++)
			if(a[i]>a[temp_i]) temp_i=i;
	
			if(temp_i!=j)
			{
				t=a[temp_i];
				a[temp_i]=a[j];
				a[j]=t;
	     	}
	}
}
	
	
