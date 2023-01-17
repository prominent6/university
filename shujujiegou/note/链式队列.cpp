#include <iostream>
#include <malloc.h>
using namespace std;
struct Node{
	int data;
	struct Node *next;
};
struct Queue{
	struct Node* frontNode;
	struct Node* tailNode;
	int size;
}; 
struct Node* createNode(int data){
	struct Node* newNode=(struct Node*)malloc(sizeof(struct Node));
	newNode->data=data;
	newNode->next=NULL;
	return newNode;
}
struct Queue *createQueue(){
	struct Queue* myQueue=(struct Queue*)malloc(sizeof(struct Queue));
	myQueue->frontNode=myQueue->tailNode=NULL;
	myQueue->size=0;
	return myQueue;
}
//入队 尾插法
void push(struct Queue* myQueue,int data){
	struct Node *newNode=createNode(data);
	if(myQueue->size==0) myQueue->frontNode=myQueue->tailNode =newNode;
	else{
		myQueue->tailNode->next=newNode;
		myQueue->tailNode=newNode;
	}
	myQueue->size++;
} 
//出队
void pop(struct Queue* myQueue){
	if(myQueue->size==0) return;
	else{
		struct Node *newNode=myQueue->frontNode->next;
		free(myQueue->frontNode);
		myQueue->frontNode=newNode;
	}
	myQueue->size--;
} 
//获取队头元素
int front(struct Queue* myQueue){
	if(myQueue->size==0) return 0;
	else return myQueue->frontNode->data;
} 
int main(){
	struct Queue* myQueue=createQueue();
	push(myQueue,1);
	push(myQueue,2);
	cout<<front(myQueue);
	return 0;
}
