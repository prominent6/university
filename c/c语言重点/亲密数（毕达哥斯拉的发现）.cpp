#include <stdio.h>

int yinzi(int m);
int main(void)
{
	int m,n; 
	printf("shuru:");
	scanf("%d,%d",&m,&n); 
	int result1=yinzi(m);
	int result2=yinzi(n);
	if(result1==n&&result2==m) printf("Yes!");
	else printf("No!");
	return 0; 
}
int yinzi(int m)
{
	int sum=0;
	for(int i=1;i<m;i++)
	{
		if(m%i==0)
		{
			sum+=i;
		}
	}
	return sum;
}
