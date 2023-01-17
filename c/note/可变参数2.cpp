#include <stdio.h>

#include <stdarg.h>

int sum(int n,...);   //...表示参数个数不确定 ，n表示参数个数 
int sum(int n,...){
	int i,sum=0;
	va_list vap; //定义参数列表
	va_start(vap,n); //初始化参数列表 
	for(i=0;i<n;i++){
		sum+=va_arg(vap,int); //获取后面每个参数的值 
	}
	va_end(vap); //关闭参数列表
	return sum; 
}
int main(void){
	int result;
	result = sum(1,2,3,4);
	printf("%d\n",result);
	return 0;
}
