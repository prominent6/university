#include <stdio.h>
int Even(int n);
int main(void)
{
	int n,x;
	int even=0,odd=0;
	printf("Please enter the number:\n");
	do
	{
		scanf("%d",&n);
		if(n==-1&&even==0&&odd==0) printf("over!\n");
		if(n==-1) break;
		if(Even(n)) 
		{
		   printf("%d:even\n",n);
		   even++;	
		}
		else 
		{
			printf("%d:odd\n",n);
			odd++;
		}
	} while(n!=-1);
	printf("The total number of odd is %d\n",odd);
	printf("The total number of even is %d\n",even);
}
int Even(int n)
{
	if(n%2==0) return 1;
	else return 0;
}
