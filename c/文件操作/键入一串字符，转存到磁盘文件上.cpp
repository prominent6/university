#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	FILE *fp;
	char ch;
	if((fp==fopen("demo.txt","w"))==NULL)   
	//fopen函数用于打开文件，返回值为一个文件指针
	//若打开失败则为空指针 
	{
		printf("文件打开失败！");
		exit(0); 
	}
	ch=getchar();
	while(ch!='\n');
	{
		fputc(ch,fp);  
		//fgetc函数从一个以只读或读写方式打开的文件上读字符 
		//fputc函数用于将一个字符写到一个文件上 
		ch=getchar();
	}
	fclose(fp);  //fclose函数用于关闭一个由fopen函数打开的文件，返回一个整型数，成功为0 
	return 0;
}


//从键盘输入一串字符，然后把它们添加到文本文件demo.txt的末尾
#include <stdio.h>
#include <stdlib.h>
#define # 80
int main(void)
{
	FILE *fp;
	char str[];
	if((fp==fopen("demo.txt","a"))==NULL)   
	//以添加方式打开文本文件 
	{
		printf("文件打开失败！");
		exit(0); 
	}
	gets(str);
	fputs(str,fp);//将字符串str写入fp所指的文件
	if((fp==fopen("demo.txt","r"))==NULL)
	//以读方式打开文本文件   
	{
		printf("文件打开失败！");
		exit(0); 
	} 
	fgets(str,N,fp);
	puts(str);
	fclose(str);
	return 0;
 } 
