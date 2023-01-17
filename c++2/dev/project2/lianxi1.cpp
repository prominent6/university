#include <stdio.h>
#include <Windows.h>
#include <string.h>

int main(void) {
	char name[32]="小兰";
	char addr[32]= "四川"; 
	
	printf("同学，你叫什么名字?\n");
	//输入  小芳\n， 输入缓冲区：小芳\n -> \n （剩下） 
	scanf("%s",&name);
	
	//清空输入缓冲区
   fflush(stdin); 
	
	printf("%s同学，家住何地？\n",name);
	gets(addr);
	
	printf("家住%s的%s同学,你好啊！\n",addr,name);
	 
	system("pause");
	return 0;
}
