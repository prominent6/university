#include <stdio.h>
int main(void)
{
	int a,aa[4],t;
	scanf("%d",&a);
	aa[0]=a%10;  //�õ���λ���ĸ�λ 
	aa[1]=a%100/10; //�õ���λ����ʮλ 
	aa[2]=a%1000/100;
	aa[3]=a/1000; //�õ���λ����ǧλ 
	for(int i=0;i<=3;i++)
	{
		aa[i]+=5;
		aa[i]%=10;
	}
	for(int i=0;i<3/2;i++)
	{
		t=aa[i];
		aa[i]=aa[3-i];
		aa[3-i]=t;
	}
	for(int i=3;i>=0;i--)
	{
		printf("%d",aa[i]);
	}
	return 0;
}
