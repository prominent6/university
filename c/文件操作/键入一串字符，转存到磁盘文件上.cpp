#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	FILE *fp;
	char ch;
	if((fp==fopen("demo.txt","w"))==NULL)   
	//fopen�������ڴ��ļ�������ֵΪһ���ļ�ָ��
	//����ʧ����Ϊ��ָ�� 
	{
		printf("�ļ���ʧ�ܣ�");
		exit(0); 
	}
	ch=getchar();
	while(ch!='\n');
	{
		fputc(ch,fp);  
		//fgetc������һ����ֻ�����д��ʽ�򿪵��ļ��϶��ַ� 
		//fputc�������ڽ�һ���ַ�д��һ���ļ��� 
		ch=getchar();
	}
	fclose(fp);  //fclose�������ڹر�һ����fopen�����򿪵��ļ�������һ�����������ɹ�Ϊ0 
	return 0;
}


//�Ӽ�������һ���ַ���Ȼ���������ӵ��ı��ļ�demo.txt��ĩβ
#include <stdio.h>
#include <stdlib.h>
#define # 80
int main(void)
{
	FILE *fp;
	char str[];
	if((fp==fopen("demo.txt","a"))==NULL)   
	//����ӷ�ʽ���ı��ļ� 
	{
		printf("�ļ���ʧ�ܣ�");
		exit(0); 
	}
	gets(str);
	fputs(str,fp);//���ַ���strд��fp��ָ���ļ�
	if((fp==fopen("demo.txt","r"))==NULL)
	//�Զ���ʽ���ı��ļ�   
	{
		printf("�ļ���ʧ�ܣ�");
		exit(0); 
	} 
	fgets(str,N,fp);
	puts(str);
	fclose(str);
	return 0;
 } 
