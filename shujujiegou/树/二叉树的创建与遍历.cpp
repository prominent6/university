#include <iostream>
using namespace std;

typedef struct TreeNode{
	char data;
	struct TreeNode* lchild;
	struct TreeNode* rchild;
} TreeNode;

void createTree(TreeNode **T,string data,int* index){
	char ch;
    ch=data[*index];
	*index+=1;
	if(ch=='#'){
		*T=NULL;
	}else{
		*T=(TreeNode *)malloc(sizeof(TreeNode));
		(*T)->data=ch;
		createTree(&((*T)->lchild),data,index);
		createTree(&((*T)->rchild),data,index); 
	}
}

//œ»–Ú 
void preOrder(TreeNode *T){
	if(T==NULL){
		return;
	}else{
		cout<<T->data;
		preOrder(T->lchild);
		preOrder(T->rchild);
	}
} 

//÷––Ú 
void inOrder(TreeNode *T){
	if(T==NULL){
		return;
	}else{
		inOrder(T->lchild);
		cout<<T->data;
		inOrder(T->rchild);
	}
} 

//∫Û–Ú 
void postOrder(TreeNode *T){
	if(T==NULL){
		return;
	}else{
		postOrder(T->lchild);
		postOrder(T->rchild);
		cout<<T->data;
	}
} 
int main(int argc,char* argv[]){
	TreeNode *T;
	int index=0;
	string data="AB##C##";
	createTree(&T,data,&index);
	preOrder(T);
	cout<<endl;
	inOrder(T);
	cout<<endl;
	postOrder(T);
	return 0;
}
