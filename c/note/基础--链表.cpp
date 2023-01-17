#include <stdio.h>
#include <stdlib.h> 
struct Node{
	int date;
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
struct Node* creatNode(int date){
	struct Node* newNode=(struct Node*)malloc(sizeof(struct Node));
	newNode->date=date;
	newNode->next=NULL;
	return newNode;
}

//打印遍历链表 
void printList(struct Node* headNode){
	struct Node* pMove=headNode;
	while(pMove){
		printf("%d",pMove->date);
		pMove=pMove->next;
	}
	printf("\n");
}

//插入结点 头插法 
void insertNodeByHead(struct Node* headNode,int date){
	struct Node* newNode=creatNode(date);
	
	//敲重点，这里有顺序的！！ 
	newNode->next=headNode->next;
	headNode->next=newNode;
//	free(newNode);  //不用哈，它是一个结点 
}

//删除结点  指定位置删除
void deleteNodeByAppoin(struct Node* headNode,int posDate){
	struct Node* posNode=headNode->next;
	struct Node* posNodeFront=headNode;
	if(posNode==NULL){
		printf("无法找到！");
	}else{
		while(posNode->date!=posDate){
			posNodeFront=posNode;
			posNode=posNodeFront->next;
		}
		if(posNode==NULL){
			printf("无法找到！");
			return;
     	}
	}
	posNodeFront->next=posNode->next;
	free(posNode);   //记得free!! 
}

int main(void){
//	struct Node Node1={1,null};
//	struct Node Node2={2,NULL};
//	Node1.next=Node2; 
//	//静态生成的链表 
	
	struct Node* list=creatList();
	insertNodeByHead(list,1);
	insertNodeByHead(list,2);
	insertNodeByHead(list,3);
	printList(list);
    deleteNodeByAppoin(list,2);
    printList(list);
	system("pause");
	return 0;
}
