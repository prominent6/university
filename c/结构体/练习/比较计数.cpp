//�ñȽϼ������Խṹ����a���ֶ�num������������
#include <stdio.h>
#define N 20
/*����ṹ�������洢���ݼ���������*/
struct order{
	int num;
	int con;
} a[N];
int main(void){
	int i,j;
	for(i=0;i<5;i++){
		scanf("%d",&a[i].num);
		a[i].con=0;
	}
	//˫��ѭ���жϱȶ���ֵ�� 
	for(i=0;i<5;i++){
		for(j=i;j<5;j++){
			if(a[j].num>a[i].num){
				a[j].con ++;
			} else if(a[j].num<a[i].num){
				a[i].con ++;
			}
		}
	}
	printf("������˳����:\n");
	for(i=0;i<5;i++){
		printf("%3d%3d\n",a[i].num,a[i].con);
	}
//	while(gets(a[i].num)!=EOF){
//		a[i].con=0;
//	}
	return 0;
}
