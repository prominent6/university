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
		hanoi(n-1,from,to,by);   //��n-1��Բ�̴�X����Z�ƶ���Y 
		move(n,from,to);         //�ƶ���n��Բ�� 
		hanoi(n-1,by,from,to);   //��n-1��Բ�̴�Y����X�ƶ���Z 
	}
}
int main(void)
{
	int n;
	printf("shuru");
	scanf("%d",&n); 
	hanoi(n,'X','Y','Z'); //����Y���ӽ�n�����Ӵ�X�Ƶ�Z 
	return 0;
}
