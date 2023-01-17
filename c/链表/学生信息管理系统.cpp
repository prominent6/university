#include <stdio.h>
#include <stdlib.h> 
typedef struct student{   //
	char name[20];
	int num;
	int score;
}STUDENT;
struct Node{
	STUDENT date;  //
	struct Node* next;
};

//动态创建链表=动态内存申请+模块化设计 
//创建链表 创建一个表头表示整个链表 
struct Node* creatList(){
	struct Node* headNode=(struct Node*)malloc(sizeof(struct Node));
	//通过动态内存申请将结构指针变成结构体变量 
	//变量使用前必须被初始化
	headNode->next=NULL;
	return headNode;
}

//创建结点
struct Node* creatNode(STUDENT date){ //
	struct Node* newNode=(struct Node*)malloc(sizeof(struct Node));
	newNode->date=date;
	newNode->next=NULL;
	return newNode;
}

//打印遍历链表 
void printList(struct Node* headNode){
	struct Node* pMove=headNode->next;
	while(pMove){
		//
		printf("%s\t%d\t%d\n",pMove->date.name,pMove->date.num,pMove->date.score);
		pMove=pMove->next;
	}
	printf("\n");
}

//插入结点 头插法 
void insertNodeByHead(struct Node* headNode,STUDENT date){ //
	struct Node* newNode=creatNode(date);
	newNode->next=headNode->next;
	headNode->next=newNode;
}

//删除结点  指定位置删除
void deleteNodeByAppoin(struct Node* headNode,int posDate){
	struct Node* posNode=headNode->next;
	struct Node* posNodeFront=headNode;
	if(posNode==NULL){
		printf("无法找到！");
	}else{
		while(posNode->date.num!=posDate){
			posNodeFront=posNode;
			posNode=posNodeFront->next;
		}
		if(posNode==NULL){
			printf("无法找到！");
			return;
     	}
	}
	posNodeFront->next=posNode->next;
	free(posNode);   
}

int main(void){
	struct Node* list=creatList();
	STUDENT info;
	while(1){
		printf("请输入名字，编号，英语成绩\n");
		scanf("%s %d %d",info.name,&info.num,&info.score);
		insertNodeByHead(list,info);
		printf("continue(Y/N)\n");
		char choice;
		scanf(" %c",&choice);
		if(choice=='N'||choice=='n'){
			break;
		}
	}
	printList(list);
	printf("请输入要删除的学生学号：\n");
    deleteNodeByAppoin(list,2);
    printList(list);
	system("pause");
	return 0;
}
