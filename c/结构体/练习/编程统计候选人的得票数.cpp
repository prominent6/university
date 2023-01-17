#include <stdio.h>
#include <string.h>
struct candicate{
	char name[20];
	int vote;
}; 
int main(void){
	struct candicate arr[3]={
		"li",0,"zhang",0,"wang",0  //没有; 
	};   //初始化结构体 
	char Name[20];
	int wrong=0,i,j,flag=1;
	for(i=0;i<10;i++){
		printf("Input vote %d:",i+1);
		scanf("%s",Name); //不需要& 
		flag=1;
		for(j=0;j<3;j++){
			if(strcasecmp(Name,arr[j].name)==0){  //对比时不区分大小写 
			    arr[j].vote++;
			    flag=0;
		    }
	    }
	    if(flag){
			    wrong++;
		}
    }
	printf("Election results:\n");
	for(i=0;i<3;i++){
		printf("%8s:%d\n",arr[i].name,arr[i].vote);
	}
	printf("Wrong election:%d\n",wrong);
	return 0;
}
