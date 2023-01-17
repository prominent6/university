#include <stdio.h>

void move(int n,char from,char to);
void hanoi(int n,char from,char by,char to);

void move(int n,char from,char to)
{
	printf("%d:%c --> %c\n",n,from,to);
}
void hanoi(int n,char from,char by,char to)
{
	if(n==1)
	{
		move(n,from,to);
	} else
	{
		hanoi(n-1,from,to,by);   //将n-1个圆盘从X借助Z移动到Y 
		move(n,from,to);         //移动第n个圆盘 
		hanoi(n-1,by,from,to);   //将n-1个圆盘从Y借助X移动到Z 
	}
}
int main(void)
{
	int n;
	printf("shuru");
	scanf("%d",&n); 
	hanoi(n,'X','Y','Z'); //借助Y柱子将n个盘子从X移到Z 
	return 0;
}
