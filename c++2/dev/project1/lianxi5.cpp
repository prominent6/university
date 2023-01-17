#include <stdio.h>
#include <windows.h>
#include <string.h>    //c语言风格

int main(void){
	char word[128];     //记得定义有多少元素 
	int count=0;
	int length=0;
	
    printf("请输入多个单词：\n");  //记得换行符\n 
	
	while(1) { //1就是真
     //直到输入结束： 按下Ctrl+z,就会遇到文件结束符(EOF）， 返回-1
	   if(scanf("%s",word)==-1){
		  	break;
		  } 
	    count++;  //count=count+1
	    length+=strlen(word);  //a+=100即a=a=100 
	}
   	 
   	 printf("一共有%d""个单词\n",count);
     printf("单词的总长度为：%d\n",length);
   	 
	system ("pause");
	return 0;
} 
