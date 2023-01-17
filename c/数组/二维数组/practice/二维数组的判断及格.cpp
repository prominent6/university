#include<stdio.h>

int main(void){
	int grade[2][3]={{60,77,59},{99,100,60}};
	int i,j;
	
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			if(grade[i][j]<60)
			{
				printf("第%d位学生不及格",i+1);
				continue;
			}
		}
	}
	return 0;
} 
