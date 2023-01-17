#include <stdio.h>

int main(void)
{
	float sum=0,mul=1;
	for(int i=1;i<=99;i++)
	{
		mul=1.0/(i*(i+1)*(i+2));
		sum+=mul;
	}
	printf("%f",sum);
	return 0;
}
