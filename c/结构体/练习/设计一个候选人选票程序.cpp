#include <stdio.h>
#include <string.h>
struct candidate{
	char name[20]; //�洢����
	int count; //��¼Ʊ�� 
} cndt[3]={{"��",0},{"��",0},{"��",0}};
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
