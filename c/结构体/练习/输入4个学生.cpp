#include <stdio.h>
typedef struct student{
	unsigned int studentID;
	char studentName[10];
	int score;
}STUDENT;
int main(void){
	STUDENT stu[5];
	int temp;
	for(int i=0;i<4;i++){
		printf("输入第%d个学生的信息：学号、姓名、成绩\n",i+1);
		scanf("%d %s %d",&stu[i].studentID,&stu[i].studentName,&stu[i].score);
	}
//	for(int i=0;i<3;i++){
//		for(int j=i;j<4;j++){
//			if(stu[j].score>stu[i].score){
//				temp=stu[i].score;
//				stu[i].score=stu[j].score;
//				stu[j].score=temp;
//			}
//		}
//	}
for (int j = 4; j > 0; --j)
    {
        for (int i = 0; i < 3; i++)
        {
            if (stu[i].score < stu[i + 1].score)
            {
                stu[4] = stu[i];
                stu[i] = stu[i + 1];
                stu[i + 1] = stu[4];
            }
        }
    }
	printf("排序后学生的信息为:\n");
	for(int i=0;i<4;i++){
		printf("%d %s %d\n",stu[i].studentID,stu[i].studentName,stu[i].score);
	}
	return 0;
}
