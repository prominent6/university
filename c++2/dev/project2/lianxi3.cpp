#include <stdio.h>
#include <Windows.h>
#include <string.h>

int main(void){
	char addr[]= "四川";
	printf("同学，你是哪里人？\n");
	scanf("%s",&addr);
	
	if(strcmp(addr,"重庆")==0){
		printf("同学，我们是老乡哦！\n");
	} else{
		printf("哈哈哈，有缘相见！\n");
	}
	
	system("pause");
	return 0;
}
