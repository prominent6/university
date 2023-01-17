#include <stdio.h>
#define N 3
void Max(int a,int b,int c);
void Px(int y[],int n);
void Px2(int a,int b,int c);
int main(void)
{
	int a=3,b=6,c=5;
	Max(a,b,c);
	int y[N]={a,b,c};
	Px(y,N);
	 for(int x=0;x<3;x++)
	 {
	 	printf("%d",y[x]);
	 	
	 }
	 Px2(a,b,c); 
	return 0;
 } 
 
 void Max(int a,int b,int c)
 {
 	int t=a>b?a:b;
 	int max;
 	if(c>t) max=c;
 	else max=t;
 	printf("max=%d\n",max);
 }
 void Px(int y[], int n)
 {
 	
 	int temp,t;
 	for(int i=0;i<2;i++)
 	{
 		temp=i;
 		for(int j=i+1;j<3;j++)
 		{
 			if(y[j]>y[temp]) temp=j;
		 }
		 if(temp!=i)
		 {
		 	t=y[i];
		 	y[i]=y[temp];
		 	y[temp]=t;
		 }
	 }
}
void Px2(int a,int b,int c)
{
	int t=a>b?a:b;
	int max1,max2,max3;
	if(t==a&&t<c)
	{
		max1=c;
		max2=a;
		max3=b;
	} else if(t==a&&t>c)
	{
		max1=a;
		if(b>c)
		{
			max2=b;
			max3=c;
		} else {
			max2=c;max3=b;
		}
	} else if(t==b&&t<c)
	{
		max1=c;
		max2=b;
		max3=c;
	} else if(t==b&&t>c)
	{
		max1=b;
	    if(a>c)
	    {
	    	max2=a;max3=c;
		}else {
			max2=c;max3=a;
		}
	}
	printf("%d%d%d",max1,max2,max3);
}
