#include <stdio.h>
#include <string.h>
typedef struct candicate{
	char name[20];
	int num;
} arr[3];
int main(void){
	struct candicate arr[3]={
		"li",0,"zhang",0,"wang",0
	};  //·ÖºÅ 
	char n[20];
	int i,j,flag=1,cout=0;
	for(i=0;i<10;i++){
		printf("Input vote %d:",i+1);
		gets(n);
		flag=1; //
		for(j=0;j<3;j++){
			if(strcasecmp(n,arr[j].name)==0){
				arr[j].num++;
				flag=0;
			}
		}
		if(flag) cout++;
	}
	printf("Election results:\n");
	for(j=0;j<3;j++){
		printf("%8s:%d\n",arr[j].name,arr[j].num);
	}
	printf("Wrong election:%d\n",cout);
	return 0;
}
