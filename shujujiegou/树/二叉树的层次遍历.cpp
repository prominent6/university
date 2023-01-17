#include <iostream>
using namespace std;
typedef struct TreeNode{
	char data;
	struct TreeNode* lchild;
	struct TreeNode* rchild;
} TreeNode;
typedef struct QueueNode{
	TreeNode* data;
	struct QueueNode* pre;
	struct QueueNode* next;
} QueueNode;

void createTree(TreeNode **T,char* data,int* index){
	char ch;
	ch=data[*index];
	*index+=1;
	if(ch=='#') *T=NULL;
	else{
		*T=(TreeNode*)malloc(sizeof(TreeNode));
		(*T)->data=ch;
		createTree(&((*T)->lchild),data,index);
		createTree(&((*T)->rchild),data,index);
	}
} 
void preOrder(TreeNode* T){
	if(T==NULL){
		return;
	}else{
		cout<<T->data;
		preOrder(T->lchild);
		preOrder(T->rchild); 
	}
}
QueueNode* initQueue(){
	QueueNode* Q=(QueueNode*)malloc(sizeof(QueueNode));
	Q->data=NULL;
	Q->next=Q;
	q->pre=Q;
	return Q;
}
void enQueue(TreeNode* data,QueueNode* Q){
	QueueNode* node=(QueueNode*)malloc(sizeof(QueueNode));
	node->data==
}
int main(){
	TreeNode* T;
	int index=0;
	createTree(&T,argv[1],index);
	preOrder(T);
	cout<<endl;
	return 0; 
} 
