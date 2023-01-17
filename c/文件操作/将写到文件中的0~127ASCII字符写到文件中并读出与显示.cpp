#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main(void)
{
	FILE *fp;
	char ch;
	if((fp==fopen("demo.bin","wb"))==NULL)  //以二进制写方式打开文件 
	{
		printf("打开文件失败！\n");
		exit(0);
	}
	for(int i=0;i<128;i++)
	{
		fputc(i,fp);  //将ASCII码值在0~127之间的所有字符写入文件 
	} 
	fclose(fp);
	if((fp==fopen("demo.bin","rb"))==NULL)  //以二进制写方式打开文件 
	{
		printf("打开文件失败！\n");
		exit(0);
	}
//	while((ch=fgetc(fp))!=EOF)  //从文件中读取字符直到文件末尾 
//	{
//		putchar(ch); //在显示器上显示从文件读出的所有字符 
//	}

//等价于：
    ch=fgetc(fp);   
	 //fgetc函数从一个以只读或读写方式打开的文件上读字符 
 
     while(!feof(fp))  //feof()用于检查是否到达文件末尾，是返回非0值 
     {
     	putchar(ch);
     	ch=fgetc(fp);
	 }
 

//升级：判断是否为可打印字符 
//	while((ch=fgetc(fp))!=EOF)  //从文件中读取字符直到文件末尾 
//	{
//    if(isprint(ch)) printf("%c \t",ch);
//    else printf("%d \t",ch);
//	}
    
	fclose(fp);
	return 0;

}
