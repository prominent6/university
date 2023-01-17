#include <stdio.h>
union data{
	short i;
	char c[2];
};
typedef union data DATA;
int main(void){
	DATA r,*s=&r;
	s->i=0x3833; //换算成二进制 
	printf("\n");
	printf("c[0]=%d,c[1]=%d\n",r.c[0],s->c[1]);
	return 0;
}


#include <stdio.h>
int main(void){
	short a,b;
	printf("请输入一个十六进制数：\n");
	scanf("%x",&a);
	b=(a>>8 & 0x00FF); //先将高8位右移至低8位（负数补1），再&00FF保留低8位
	printf("result=%x\n",b);
	return 0; 
}
