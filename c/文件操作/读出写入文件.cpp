#include <stdio.h>
#include <stdlib.h>
//�����ļ�
int main(void){
	//��a.txt�ļ����ݳ���
	//fopen() fgetc() fclose()
	char ch;
	FILE *fp_r=fopen("C:\\Users\\zsyub\\Desktop\\����C����\\�ļ�����\\a.txt","r");
	FILE *fp_w=fopen("C:\\Users\\zsyub\\Desktop\\����C����\\�ļ�����\\c.txt","w");
	if(fp_r==NULL||fp_w==NULL){
		printf("error!");
		return 0;
	} 
	while(!feof(fp_r)){ //����ĩβ1 
		ch=fgetc(fp_r);
		fputc(ch,fp_w);
	}
	printf("succeed");
	fclose(fp_r);
	fclose(fp_w);
} 
