#include <stdio.h>
#include <stdlib.h> 
struct Node{
	int date;
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
struct Node* creatNode(int date){
	struct Node* newNode=(struct Node*)malloc(sizeof(struct Node));
	newNode->date=date;
	newNode->next=NULL;
	return newNode;
}

//��ӡ�������� 
void printList(struct Node* headNode){
	struct Node* pMove=headNode;
	while(pMove){
		printf("%d",pMove->date);
		pMove=pMove->next;
	}
	printf("\n");
}

//������ ͷ�巨 
void insertNodeByHead(struct Node* headNode,int date){
	struct Node* newNode=creatNode(date);
	
	//���ص㣬������˳��ģ��� 
	newNode->next=headNode->next;
	headNode->next=newNode;
//	free(newNode);  //���ù�������һ����� 
}

//ɾ�����  ָ��λ��ɾ��
void deleteNodeByAppoin(struct Node* headNode,int posDate){
	struct Node* posNode=headNode->next;
	struct Node* posNodeFront=headNode;
	if(posNode==NULL){
		printf("�޷��ҵ���");
	}else{
		while(posNode->date!=posDate){
			posNodeFront=posNode;
			posNode=posNodeFront->next;
		}
		if(posNode==NULL){
			printf("�޷��ҵ���");
			return;
     	}
	}
	posNodeFront->next=posNode->next;
	free(posNode);   //�ǵ�free!! 
}

int main(void){
//	struct Node Node1={1,null};
//	struct Node Node2={2,NULL};
//	Node1.next=Node2; 
//	//��̬���ɵ����� 
	
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
