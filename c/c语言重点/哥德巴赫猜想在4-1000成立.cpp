#include <stdio.h>
#include <math.h>

int prime(int n);  //�ж�����
void Goldbach(int even);//�ֽ� 
int main(void){
	for(int i=4;i<1000;i++)
	{
		Goldbach(i);
//��Ϊ������࣬�м�ͣ��һ�Σ�Ŀ�����Խ�����ֿ���������س������� 
		if(i%50==0)
		{
			puts("press\'enter\'to continue");
			getchar();
		}
	}
}
int prime(int n)
{
	for(int i=2;i<=sqrt(n);i++)
	{
		if(n%i==0) return 0;
	}
}
void Goldbach(int even)
{
	int m,n;
	for(m=2;m<=even/2;m++)
	{
		n=even-m;
		if(prime(m)&&prime(n))
		{
			printf("%d=%d+%d\n",even,m,n);
			return;
		}
	}
} 
