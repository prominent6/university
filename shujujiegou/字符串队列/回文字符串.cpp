//判定给定的字符序列是否为回文
#include <iostream>
#include <malloc.h>
#include <string>
using namespace std;
struct Node{
	char data;
	struct Node *next; 
};
struct stack{
	struct Node* stackTop;
	int size;
};
struct Node *createNode(char data){
	struct Node *newNode=(struct Node*)malloc(sizeof(struct Node));
	newNode->data=data;
	newNode->next=NULL;
	return newNode;
}
struct stack* createStack(){
	struct stack* mystack=(struct stack*)malloc(sizeof(struct stack));
	mystack->size =0;
	mystack->stackTop =NULL;
	return mystack;
}
void push(struct stack* mystack,char data){
	struct Node* newNode=createNode(data);
	newNode->next=mystack->stackTop;
	mystack->stackTop =newNode; 
	mystack->size++;
}
char top(struct stack* mystack){
	if(mystack->size==0) return 0;
	else{
		return mystack->stackTop->data;
	}
}
void pop(struct stack* mystack){
	if(mystack->size==0) return;
	else{
		struct Node* nextnode=mystack->stackTop->next;
		free(mystack->stackTop);
		mystack->stackTop=nextnode;
		mystack->size--;
	}
}
int main(){
	struct stack* mystack=createStack();
	string s="goodoog"; 
	int flag=1;
	for(int i=0;i<s.size()/2;i++){
		push(mystack,s[i]);
	}
	if(s.size()%2){
		for(int i=s.size()/2+1;i<s.size();i++){
			if(s[i]!=top(mystack)){
				flag=0;
				cout<<"no";
				return 0;
			}else{
				pop(mystack);
			}
		}	
	}else{
		for(int i=s.size()/2;i<s.size();i++){
			if(s[i]!=top(mystack)){
				flag=0;
				cout<<"no";
				return 0;
			}else{
				pop(mystack);
			}
		}	
	}
	if(flag){
		cout<<"yes";
		return 0;
	}
} 
