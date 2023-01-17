#include <stdio.h>
#include <windows.h>
#include <string.h>    //c语言风格

int main(void){
	char line[128];     //记得定义有多少元素 
	int count=0;
	int length=0;
	
    printf("请输入任意多行：\n");  //记得换行符\n 
	
	while(1) { //1就是真
     //直到输入结束： 按下Ctrl+z,就会遇到文件结束符(EOF）， 返回0
	   if((gets(line))==0){
		  	break;
		  } 
	    count++;  //count=count+1
	    length+=strlen(line);  //a+=100即a=a=100 
	}
   	 
   	 printf("一共有%d行\n",count);
     printf("总长度为：%d\n",length);
   	 
	system ("pause");
	return 0;
}
