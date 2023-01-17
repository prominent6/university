#include <iostream>
#include <Windows.h>
#include <stdio.h>

using namespace std;

int main(void){
	char name[32];
	
	printf("请输入你的名字：");
	scanf("%s",&name);
	printf("%s,你好！\n",name); 

    system("pause");
    return 0;
}

