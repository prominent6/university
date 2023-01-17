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

void PreOrder(BiTree t, void visit(DataType item))
{
	if(t != NULL)
	{
		visit(t->data);
		PreOrder(t-> leftChild, visit);
		PreOrder(t-> rightChild, visit);
	}
}

void InOrder(BiTree t, void visit(DataType item))
{
	if(t != NULL)
	{
		InOrder(t->leftChild, visit);
		visit(t->data);
		InOrder(t->rightChild, visit);
	}
}

void PostOrder(BiTree t, void visit(DataType item))
{
	if(t != NULL)
	{
		PostOrder(t->leftChild, visit);
		PostOrder(t->rightChild, visit);
		visit(t->data);
	}
}


void Visit(DataType item)
{
	printf("%c ", item);
}

BiTreeNode *Search(BiTree root, DataType x)//需找元素x是否在二叉树中
{
	BiTree find=NULL;
	if(root!=NULL)
	{
		if(root->data==x) find=root;
		else
		{
			find=Search(root->leftChild,x);
			if(find==NULL)
				find=Search(root->rightChild,x);
		}
	}
	return find;
}

int main(void)
{
	char x='E';	
	BiTree root,find;
	CreateBiTree(root);
	
	printf("前序遍历：");
	PreOrder(root, Visit);
	printf("\n中序遍历：");
	InOrder(root, Visit);
	printf("\n后序遍历：");
	PostOrder(root, Visit);
	
	find=Search(root,x);
	if(find!=NULL)
		printf("\n数据元素%c在二叉树中 \n",x);
	else
		printf("\n数据元素%c不在二叉树中 \n",x);
	
	Destroy(root);
	printf("\n学号：2021211818 苏卓萱");
	return 0;
}
