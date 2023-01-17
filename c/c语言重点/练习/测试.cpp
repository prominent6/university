#include <stdio.h>

int main(void)
{
	int a=3,b=5,c=2;
	int y[3]={a,b,c};
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
	for(int i=0;i<3;i++)
	{
		printf("%d",y[i]);
	}
	return 0;
}
