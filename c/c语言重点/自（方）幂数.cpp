#include <stdio.h>
#include <math.h>

int main(void)
{
//	int sum=0;   //���ܶ������⣬ѭ����ÿ��sumҪ��ʼ�� 
	for(int i=3;i<=6;i++)  //i��ʾλ�� 
	{
		printf("%dλ���������У�",i);
		for(int j=(int)pow(10,i-1);j<(int)pow(10,i);j++) //j��ʾ�� 
		{   
			int sum=0;
		    for(int n=j;(n%10)!=0;n/=10)  //n��ʾ�������ÿһ������ 
		    {
		    	sum+=(int)pow(n%10,i);
			}
			 
	     	if(sum==j) printf("%d ",j);

		}
        printf("\n");
	}
	return 0;
}

