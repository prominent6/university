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

//��̬��������=��̬�ڴ�����+ģ�黯��� 
//�������� ����һ����ͷ��ʾ�������� 
struct Node* creatList(){
	struct Node* headNode=(struct Node*)malloc(sizeof(struct Node));
	//ͨ����̬�ڴ����뽫�ṹָ���ɽṹ����� 
	//����ʹ��ǰ���뱻��ʼ��
	headNode->next=NULL;
	return headNode;
}

//�������
struct Node* creatNode(STUDENT date){ //
	struct Node* newNode=(struct Node*)malloc(sizeof(struct Node));
	newNode->date=date;
	newNode->next=NULL;
	return newNode;
}

//��ӡ�������� 
void printList(struct Node* headNode){
	struct Node* pMove=headNode->next;
	while(pMove){
		//
		printf("%s\t%d\t%d\n",pMove->date.name,pMove->date.num,pMove->date.score);
		pMove=pMove->next;
	}
	printf("\n");
}

//������ ͷ�巨 
void insertNodeByHead(struct Node* headNode,STUDENT date){ //
	struct Node* newNode=creatNode(date);
	newNode->next=headNode->next;
	headNode->next=newNode;
}

//ɾ�����  ָ��λ��ɾ��
void deleteNodeByAppoin(struct Node* headNode,int posDate){
	struct Node* posNode=headNode->next;
	struct Node* posNodeFront=headNode;
	if(posNode==NULL){
		printf("�޷��ҵ���");
	}else{
		while(posNode->date.num!=posDate){
			posNodeFront=posNode;
			posNode=posNodeFront->next;
		}
		if(posNode==NULL){
			printf("�޷��ҵ���");
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
		printf("���������֣���ţ�Ӣ��ɼ�\n");
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
	printf("������Ҫɾ����ѧ��ѧ�ţ�\n");
    deleteNodeByAppoin(list,2);
    printList(list);
	system("pause");
	return 0;
}
