//#include <stdio.h>
//#include <math.h>
//int wanshu(int i);
//int main(void)
//{
//	for(int i=0;i<=1000;i++)
//	{
//		 int j=wanshu(i);
//		 if(j) 
//		 {
//		 	printf("\n%5d\n",i);
//		 	printf("%5d",j);
//		 }
//		 
//	}
//	return 0;
//}
//int wanshu(int i)
//{
//	for(int j=0;j<sqrt(i);j++)
//	{
//		if(i%j==0) return j;
//		else return 0;
//	}
//}


#include <stdio.h>
//判断一个数是否为完数 
bool IsPerfect(int num)
{
	int tmp=0;
	for(int i = 1;i<num;i++)
	{
		if(num%i==0) tmp+=i;
	}
	return tmp == num;
}
//打印函数
void Print(int num)
{
	printf("%d=1",num);
	for(int i=2;i<num;i++)
	{
		if(num%i==0)
		{
			printf("+%d",i);
		}
	}
	printf("\n");
 } 
int main(void)
{
	int count =0;
	for(int i=1;i<=1000;i++)
	{
		if(IsPerfect(i)==true)
		{
			Print(i);
			count++;
		}
	}
	//统计完数个数 
	printf("%d",count);
	return 0;
}
