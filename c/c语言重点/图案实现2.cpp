#include <stdio.h>
int main(void)
{
	int a,b,c;
	for(a=1;a<=4;a++)    
	{
		for(b=3;b>=a-1;b--)
		{
			printf(" ");
		}
		for(c=1;c<=2*a-1;c++)
		//for(c=1;c<a;c++)
		{
			printf("*");
		}
		printf("\n");
	}
	for(a=3;a>=1;a--)
	{
		for(b=a-1;b<=3;b++)
		{
			printf(" ");
		}
		for(c=2*a-1;c>=1;c--)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
