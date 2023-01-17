//if的一种形态  c语言 
#include <stdio.h>
#include <Windows.h>
#include <string.h> 

int main(void){
	char Chinese[16];
	char math[16];
	char English[16];
	
	printf( "你的语文好不好\n");    //回答好或不好
	scanf("%s",Chinese);
	
	printf("你的数学好不好\n");
	scanf("%s",math);
	
	printf("你的英语好不好\n");
	scanf("%s",English);
	
	if (strcmp(Chinese,"好")==0){
		printf("哇，想请教一下语文怎么学习啊？\n");
	} else if(strcmp(math,"好")==0){
		printf("哇，想请教一下数学怎么学习啊？\n");
	} else if(strcmp(English,"好")==0){
	    printf("哇，想请教一下英语怎么学习啊?\n");
	} else{
		printf("一起加油吧！\n");
	}
	
	system("pause");
	return 0;
} 
