#include <stdio.h>
struct{
	int num;
	char name[10];
	char tp; //����
	union{
		int inclass;
		char position[10];
	} job; 
} person[20];
int main(void){
	printf("�����������Ϣ��������\n");
	int n;
	scanf("%d",&n);
	printf("�����������Ϣ��\n");
	int i,j;
	for(i=0;i<n;i++){
		printf("��%d����\n",i+1);
		scanf("%d %s %c",&person[i].num,&person[i].name,&person[i].tp);
		if(person[i].tp=='s') scanf("%d",&person[i].job.inclass);
		else scanf("%s",&person[i].job.position);
	}
	printf("\n���    ����    ����    �༶/ְλ\n");
	for(i=0;i<n;i++){
		if(person[i].tp=='s') printf("%d\t%s\t%c\t%d\n",person[i].num,person[i].name,person[i].tp,person[i].job.inclass);
		else printf("%d\t%s\t%c\t%s\n",person[i].num,person[i].name,person[i].tp,person[i].job.position);
	}
	return 0;
}
