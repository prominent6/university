//如果矩阵的行列是一个很大的值，而且又是稀疏矩阵，这样做就可以节省很大的空间。
//这种存储结构只限于稀疏矩阵。
//请用此结构体来存储稀疏矩阵并进行矩阵的转置
#include <stdio.h>
#include <string.h>
#define MAX_TEAM 80
struct juzhen
{
	int row;
	int col;
	int value;
};
struct juzhen a[MAX_TEAM]; //存放矩阵中元素数值不为零的元素
struct juzhen b[MAX_TEAM]; //转置后的矩阵

void init(struct juzhen a[],int rows, int cols,int count) //初始化稀疏矩阵
{
	int i,j;
	for(i=0;i<count;i++){
		printf("please input the row,col and value\n");
		scanf("%d,%d,%d",&a[i].row,&a[i].col,&a[i].value);
	}
}

void show(struct juzhen a[],int count_a)  //显示稀疏矩阵方法
{ 
    printf(" i row col val\n");
    int i;
    for(i=0;i<count_a;i++){
    	printf(" %d|  %d   %d   %d\n",i+1,a[i].row,a[i].col,a[i].value);
	}
}
void zhuanzhi(struct juzhen a[],struct juzhen b[],int rows, int cols,int count) //转置矩阵方法
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

