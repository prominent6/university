#include <stdio.h>


int main(void)
{
	int n,mul=1; 
	scanf("%d",&n);
	int sum=0;
		for(int i=n;i>0;i--)
	    {
		mul*=i;
		sum+=mul;
	    }
	return 0;
}
