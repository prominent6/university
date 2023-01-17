#include <stdio.h>
void Sort(int sh[], float a[], int n);
void Print(int sh[], float a[], int n);

int main(void)
{
	int n=5;
	int sh[n]={11,12,13,14,15};
    float f[n]={9.500,9.100,9.600,8.800,9.000};
	Sort(sh, f,n);
	printf("Order of Athletes:\n");
	Print(sh,f,n);
	return 0;
}

void Sort(int sh[], float a[], int n)
{
	int temp;
	float x,y;
	for(int i=0;i<=n-2;i++)
	{
		temp=i;
		for(int j=i+1;j<=n-1;j++)
		if(a[j]>a[temp]) temp=j;
		
		if(temp!=i)
		{
			x=a[temp];
			y=sh[temp];
		    a[temp]=a[i];
		    sh[temp]=sh[i];
		    a[i]=x;
		    sh[i]=y;
		}
		
	}
}

/* 函数功能：打印名次表 */
void Print(int sh[], float a[], int n)
{
	printf("order\tfinal score\tnumber code\n");
	for(int i=0;i<n;i++)
	{
		printf("%5d\t%11.3f\t%6d\n", i+1, a[i], sh[i]);
	}
}
