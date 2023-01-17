////稀疏矩阵类定义
//#include <stdio.h>
//#define MAX 100
//typedef struct{  //三元组 
//	int row,col;
//	int item;
//}Triple;

//转置时默认进行排序 
#include <stdio.h>
#define MAX_TERM 80 //结构体数组最大长度
#define N 5
struct juzhen{
	int row;
	int col;
	int value;
};
//结构体数组第一个元素存储矩阵的总行数，总列数和总元素个数，
//分别对应row,col,value.
struct juzhen a[MAX_TERM];        //存放矩阵中元素数值不为零的元素
struct juzhen b[MAX_TERM];        //转置后的矩阵

//初始化稀疏矩阵
void init(struct juzhen a[],int rows, int cols,int count);   
//转置矩阵方法      
void zhuanzhi(struct juzhen a[],struct juzhen b[]);
//显示稀疏矩阵方法
void show(struct juzhen a[],int count_a);

int main(void){
	printf("please input the number of rows,cols and values\n");
    scanf("%d,%d,%d",&a[0].row,&a[0].col,&a[0].value);
    init(a,a[0].row,a[0].col,a[0].value);
    show(a,a[0].value);
    printf("\n");
    zhuanzhi(a,b);
    show(b,a[0].value);
    return 0;
}
void init(struct juzhen a[],int rows, int cols,int count){
	int i,j;
	for(i=1;i<=count;i++){
		printf("please input the row,col and value\n");
		scanf("%d,%d,%d",&a[i].row,&a[i].col,&a[i].value);
	}
}
void show(struct juzhen a[],int count_a){
	int i; 
	printf(" i row col val\n");
	for(i=1;i<=count_a;i++){
		printf(" %d|  %d   %d   %d\n",i,a[i].row,a[i].col,a[i].value);
	}
}
void zhuanzhi(struct juzhen a[],struct juzhen b[]){
	int term[N]={0},star[N]; 
	//保存转置矩阵第i元素的数量  保存第i行开始位置
	int n=a[0].value;
	int i,j,k;
	int b_star;
	for(j=1;j<=n;j++){
		term[a[j].col]++;
	}
	star[0]=1;
	for(k=1;k<N;k++){
		star[k]=star[k-1]+term[k-1];
	}
	b[0].col=a[0].col;
	b[0].row=b[0].row;
	b[0].value=a[0].value;
	for(i=1;i<=n;i++){
		b_star=star[a[i].col]++;
		b[b_star].col=a[i].row;
		b[b_star].row=a[i].col;
		b[b_star].value=a[i].value;
	}

//	b[0].col=a[0].row;
//	b[0].row=a[0].col;
//	b[0].value=a[0].value;
//	int n=a[0].value;
//	int num[n]={0},pos[n]; 
//	//统计每个数字(0,1,..n)在列中出现的次数
//	//记录每个数字(0,1,..n)出现在转置后的哪一行 (从小到大）
//	//pos[i]=pos[i-1]+num[i-1] 
//	
//	int i,j,k,b_pos;
//	for(j=1;j<=n;j++){
//		num[a[j].col]++;
//	}
//	pos[0]=1;
//	for(k=1;k<N;k++){
//		pos[k]=pos[k-1]+num[k-1];
//  }
//	for(i=1;i<=n;i++){
//		b_pos=pos[a[i].col]++;
//		b[b_pos].col=a[i].row;
//		b[b_pos].row=a[i].col;
//		b[b_pos].value=a[i].value;
//	} 
}
