#include <stdio.h>
#include <math.h>

int main(void)
{
//	int sum=0;   //不能定义在这，循环中每次sum要初始化 
	for(int i=3;i<=6;i++)  //i表示位数 
	{
		printf("%d位的自幂数有：",i);
		for(int j=(int)pow(10,i-1);j<(int)pow(10,i);j++) //j表示数 
		{   
			int sum=0;
		    for(int n=j;(n%10)!=0;n/=10)  //n表示这个数的每一个数字 
		    {
		    	sum+=(int)pow(n%10,i);
			}
			 
	     	if(sum==j) printf("%d ",j);

		}
        printf("\n");
	}
	return 0;
}

