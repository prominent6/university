#include <stdio.h>
int square(int);

int square(int num)
{
	return num*num;
}
int main(void){
	int num;
	int (*fp)(int);  //���� 
	printf("qingshuruyigezhengshu:\n");
	scanf("%d",&num);
	fp=square; // �������൱�ں�����ַ  fp=&square
	printf("%d*%d=%d\n",num,num,(*fp)(num));  //���ú��� 
	return 0;
}
