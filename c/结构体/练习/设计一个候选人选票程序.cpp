#include <stdio.h>
#include <string.h>
struct candidate{
	char name[20]; //存储名字
	int count; //记录票数 
} cndt[3]={{"王",0},{"张",0},{"李",0}};
int main(void){
	int i,j;
	for(i=0;i<10;i++){
		char ch[20];
		scanf("%s",ch);
		for(j=0;j<3;j++){
			if(strcmp(ch,cndt[j].name)==0) cndt[j].count++;
		}
	}
	for(i=0;i<3;i++){
		printf("%s : %d\n",cndt[i].name,cndt[i].count);
	}
	return 0;
}
