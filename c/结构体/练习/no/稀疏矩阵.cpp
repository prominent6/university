////ϡ������ඨ��
//#include <stdio.h>
//#define MAX 100
//typedef struct{  //��Ԫ�� 
//	int row,col;
//	int item;
//}Triple;

//ת��ʱĬ�Ͻ������� 
#include <stdio.h>
#define MAX_TERM 80 //�ṹ��������󳤶�
#define N 5
struct juzhen{
	int row;
	int col;
	int value;
};
//�ṹ�������һ��Ԫ�ش洢�����������������������Ԫ�ظ�����
//�ֱ��Ӧrow,col,value.
struct juzhen a[MAX_TERM];        //��ž�����Ԫ����ֵ��Ϊ���Ԫ��
struct juzhen b[MAX_TERM];        //ת�ú�ľ���

//��ʼ��ϡ�����
void init(struct juzhen a[],int rows, int cols,int count);   
//ת�þ��󷽷�      
void zhuanzhi(struct juzhen a[],struct juzhen b[]);
//��ʾϡ����󷽷�
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
	//����ת�þ����iԪ�ص�����  �����i�п�ʼλ��
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
//	//ͳ��ÿ������(0,1,..n)�����г��ֵĴ���
//	//��¼ÿ������(0,1,..n)������ת�ú����һ�� (��С����
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
