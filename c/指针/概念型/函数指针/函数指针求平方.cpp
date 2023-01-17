#include <stdio.h>
int square(int);

int square(int num)
{
	return num*num;
}
int main(void){
	int num;
	int (*fp)(int);  //函数 
	printf("qingshuruyigezhengshu:\n");
	scanf("%d",&num);
	fp=square; // 函数名相当于函数地址  fp=&square
	printf("%d*%d=%d\n",num,num,(*fp)(num));  //调用函数 
	return 0;
}
