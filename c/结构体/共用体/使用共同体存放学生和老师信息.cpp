#include <stdio.h>
struct{
	int num;
	char name[10];
	char tp; //类型
	union{
		int inclass;
		char position[10];
	} job; 
} person[20];
int main(void){
	printf("请输入个人信息的人数：\n");
	int n;
	scanf("%d",&n);
	printf("请输入个人信息：\n");
	int i,j;
	for(i=0;i<n;i++){
		printf("第%d个人\n",i+1);
		scanf("%d %s %c",&person[i].num,&person[i].name,&person[i].tp);
		if(person[i].tp=='s') scanf("%d",&person[i].job.inclass);
		else scanf("%s",&person[i].job.position);
	}
	printf("\n编号    姓名    类型    班级/职位\n");
	for(i=0;i<n;i++){
		if(person[i].tp=='s') printf("%d\t%s\t%c\t%d\n",person[i].num,person[i].name,person[i].tp,person[i].job.inclass);
		else printf("%d\t%s\t%c\t%s\n",person[i].num,person[i].name,person[i].tp,person[i].job.position);
	}
	return 0;
}
