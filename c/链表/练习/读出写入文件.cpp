#include <stdio.h>
#include <stdlib.h>
//�����ļ�
int main(int argc,char *argv[]){  //�������β� ʵ����cmd�д��� 
	//��a.txt�ļ����ݳ���
	//fopen() fgetc() fclose()
	char ch;
	if(argc!=3){
		printf("not enough!");
		return 0;
	} 
	char filename1[50];
	gets(filename1);
//	FILE *fp_r=fopen("C:\\Users\\zsyub\\Desktop\\����C����\\�ļ�����\\a.txt","r");
	FILE *fp_r=fopen(argv[1],"r");
//	FILE *fp_w=fopen("C:\\Users\\zsyub\\Desktop\\����C����\\�ļ�����\\c.txt","w");
	FILE *fp_r=fopen(argv[2],"r");
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
