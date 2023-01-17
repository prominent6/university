#include <iostream>
#include <malloc.h>
using namespace std;
struct Node{
	int data;
	struct Node *next;
};
struct stack{
	struct Node* stackTop;
	int size;
}; 
struct Node* createNode(int data){
	struct Node* newNode=(struct Node*)malloc(sizeof(struct Node));
	newNode->data=data;
	newNode->next=NULL;
	return newNode;
}
struct stack *createStack(){
	struct stack* mystack=(struct stack*)malloc(sizeof(struct stack));
	mystack->stackTop=NULL;
	mystack->size=0;
	return mystack;
}
//��ͷ����  ��ջ 
void push(struct stack* mystack,int data){
	struct Node* newNode=createNode(data); 
	newNode->next=mystack->stackTop;
	mystack->stackTop=newNode;
	mystack->size++;
}
//��ñ�ͷԪ�� 
int top(struct stack* mystack){
	if(mystack->size==0) return mystack->size;
	return mystack->stackTop->data;
} 
//ɾ����ͷԪ��  ��ջ
void pop(struct stack* mystack){
	if(mystack->size==0) return;
	else{
		struct Node* nextNode=mystack->stackTop->next;
		free(mystack->stackTop);
		mystack->stackTop =nextNode;
		mystack->size--;
	}
} 
int main(){
	struct stack* mystack=createStack();
	push(mystack,1);
	push(mystack,2);
	//pop(mystack);
	cout<<top(mystack);
	return 0;
}
