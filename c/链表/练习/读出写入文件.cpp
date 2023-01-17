#include <stdio.h>
#include <stdlib.h>
//复制文件
int main(int argc,char *argv[]){  //主函数形参 实参在cmd中传入 
	//读a.txt文件数据出来
	//fopen() fgetc() fclose()
	char ch;
	if(argc!=3){
		printf("not enough!");
		return 0;
	} 
	char filename1[50];
	gets(filename1);
//	FILE *fp_r=fopen("C:\\Users\\zsyub\\Desktop\\重整C语言\\文件操作\\a.txt","r");
	FILE *fp_r=fopen(argv[1],"r");
//	FILE *fp_w=fopen("C:\\Users\\zsyub\\Desktop\\重整C语言\\文件操作\\c.txt","w");
	FILE *fp_r=fopen(argv[2],"r");
	if(fp_r==NULL||fp_w==NULL){
		printf("error!");
		return 0;
	} 
	while(!feof(fp_r)){ //到了末尾1 
		ch=fgetc(fp_r);
		fputc(ch,fp_w);
	}
	printf("succeed");
	fclose(fp_r);
	fclose(fp_w);
} 
