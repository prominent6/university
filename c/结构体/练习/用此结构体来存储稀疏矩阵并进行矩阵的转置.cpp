//��������������һ���ܴ��ֵ����������ϡ������������Ϳ��Խ�ʡ�ܴ�Ŀռ䡣
//���ִ洢�ṹֻ����ϡ�����
//���ô˽ṹ�����洢ϡ����󲢽��о����ת��
#include <stdio.h>
#include <string.h>
#define MAX_TEAM 80
struct juzhen
{
	int row;
	int col;
	int value;
};
struct juzhen a[MAX_TEAM]; //��ž�����Ԫ����ֵ��Ϊ���Ԫ��
struct juzhen b[MAX_TEAM]; //ת�ú�ľ���

void init(struct juzhen a[],int rows, int cols,int count) //��ʼ��ϡ�����
{
	int i,j;
	for(i=0;i<count;i++){
		printf("please input the row,col and value\n");
		scanf("%d,%d,%d",&a[i].row,&a[i].col,&a[i].value);
	}
}

void show(struct juzhen a[],int count_a)  //��ʾϡ����󷽷�
{ 
    printf(" i row col val\n");
    int i;
    for(i=0;i<count_a;i++){
    	printf(" %d|  %d   %d   %d\n",i+1,a[i].row,a[i].col,a[i].value);
	}
}
void zhuanzhi(struct juzhen a[],struct juzhen b[],int rows, int cols,int count) //ת�þ��󷽷�
{
	int i,j,p;
	for(i=0;i<count;i++){
		int q=1;
		for(j=1;j<=cols;++cols){
			for(p=1;p<=rows;++p){
				if(j==a.)
			}
		}
		b[i].row=a[i].col;
		b[i].col=a[i].row;
	}
}

int main(void)
{
	int r,c,v;
    printf("please input the number of rows,cols and values\n");
    scanf("%d,%d,%d",&r,&c,&v);
    init(a,r,c,v);
    show(a,v);
    printf("\n");
    zhuanzhi(a,b,r,c,v);
    show(b,v);
    return 0;
}

