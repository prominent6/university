#include <stdlib.h>
#include <stdio.h>
#include <iostream>
using namespace std; 
typedef char DataType;

typedef struct Node 
{
	DataType data;/*数据域*/
	struct Node *leftChild;/*左子树指针*/
	struct Node *rightChild;/*右子树指针*/
}BiTreeNode,*BiTree;/*结点的结构体定义*/

void Destroy(BiTree &root)
{
	if((root) != NULL && (root)->leftChild != NULL)
		Destroy((root)->leftChild);
	
	if((root) != NULL && (root)->rightChild != NULL)
		Destroy((root)->rightChild);
	
	free(root);
}

//先序遍历的顺序来递归建立二叉链表
void CreateBiTree(BiTree &t){
	char ch;
	cin>>ch;
	if(ch=='#') t=NULL;
	else{
		t = (BiTree)malloc(sizeof(BiTree));
		//根节点数据
		t->data = ch;
		//递归创建左子树
		CreateBiTree(t->leftChild);
		//递归创建右子树
		CreateBiTree(t->rightChild);
	}
}

//中序的非递归遍历算法
void InOrder(BiTree t)
{
	BiTree St[100],p;
	p=t;
	int top=-1;
	while(p||top>-1){
		if(p){
			top++;
			St[top]=p;
			p=p->leftChild;
		}else{
			p=St[top];
			top--;
			printf("%c ",p->data);
			p=p->rightChild;
		}
	}
}

int main(void)
{
	BiTree root;
	CreateBiTree(root);
	
	printf("\n中序遍历：");
	InOrder(root);
	
	Destroy(root);
	printf("\n学号：2021211818 苏卓萱");
	return 0;
}
