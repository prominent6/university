#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main(void)
{
	FILE *fp;
	char ch;
	if((fp==fopen("demo.bin","wb"))==NULL)  //�Զ�����д��ʽ���ļ� 
	{
		printf("���ļ�ʧ�ܣ�\n");
		exit(0);
	}
	for(int i=0;i<128;i++)
	{
		fputc(i,fp);  //��ASCII��ֵ��0~127֮��������ַ�д���ļ� 
	} 
	fclose(fp);
	if((fp==fopen("demo.bin","rb"))==NULL)  //�Զ�����д��ʽ���ļ� 
	{
		printf("���ļ�ʧ�ܣ�\n");
		exit(0);
	}
//	while((ch=fgetc(fp))!=EOF)  //���ļ��ж�ȡ�ַ�ֱ���ļ�ĩβ 
//	{
//		putchar(ch); //����ʾ������ʾ���ļ������������ַ� 
//	}

//�ȼ��ڣ�
    ch=fgetc(fp);   
	 //fgetc������һ����ֻ�����д��ʽ�򿪵��ļ��϶��ַ� 
 
     while(!feof(fp))  //feof()���ڼ���Ƿ񵽴��ļ�ĩβ���Ƿ��ط�0ֵ 
     {
     	putchar(ch);
     	ch=fgetc(fp);
	 }
 

//�������ж��Ƿ�Ϊ�ɴ�ӡ�ַ� 
//	while((ch=fgetc(fp))!=EOF)  //���ļ��ж�ȡ�ַ�ֱ���ļ�ĩβ 
//	{
//    if(isprint(ch)) printf("%c \t",ch);
//    else printf("%d \t",ch);
//	}
    
	fclose(fp);
	return 0;

}
