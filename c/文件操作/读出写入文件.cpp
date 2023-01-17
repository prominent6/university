#include <stdio.h>
#include <stdlib.h>
//复制文件
int main(void){
	//读a.txt文件数据出来
	//fopen() fgetc() fclose()
	char ch;
	FILE *fp_r=fopen("C:\\Users\\zsyub\\Desktop\\重整C语言\\文件操作\\a.txt","r");
	FILE *fp_w=fopen("C:\\Users\\zsyub\\Desktop\\重整C语言\\文件操作\\c.txt","w");
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
