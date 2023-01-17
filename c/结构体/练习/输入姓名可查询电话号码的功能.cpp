//信息查询：从键盘中输入5个姓名和电话号码，编程实现输入姓名可查询电话号码的功能。
#include <stdio.h>
#include <string.h>
struct aa
{
	char name[15];
	char tel[15];
} stu[5];   //会有多个成员就这样设置 
int main(void){
	printf("请输入姓名 电话：");
	int i,flag=1;
	for(i=0;i<5;i++){
		scanf("%s %s",&stu[i].name,&stu[i].tel);
	}
	printf("输入要查找的姓名:");
	char ch[20];
	scanf("%s",&ch);
	for(i=0;i<5;i++){
		if(strcmp(ch,stu[i].name)==0){
			printf("姓名:%s  电话:%s\n",stu[i].name,stu[i].tel);
			flag=0;
			break;
		}
	}
	if(flag) printf("没有找到!");
//	for(i=0;i<5;i++){
//		printf("%s %s",stu[i].name,stu[i].tel);
//	}
	return 0;
}
