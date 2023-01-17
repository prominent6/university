#include <stdlib.h>
#include <stdio.h>
#include <iostream>
using namespace std; 
typedef char DataType;

typedef struct Node 
{
	DataType data;/*������*/
	struct Node *leftChild;/*������ָ��*/
	struct Node *rightChild;/*������ָ��*/
}BiTreeNode,*BiTree;/*���Ľṹ�嶨��*/

void Destroy(BiTree &root)
{
	if((root) != NULL && (root)->leftChild != NULL)
		Destroy((root)->leftChild);
	
	if((root) != NULL && (root)->rightChild != NULL)
		Destroy((root)->rightChild);
	
	free(root);
}

//���������˳�����ݹ齨����������
void CreateBiTree(BiTree &t){
	char ch;
	cin>>ch;
	if(ch=='#') t=NULL;
	else{
		t = (BiTree)malloc(sizeof(BiTree));
		//���ڵ�����
		t->data = ch;
		//�ݹ鴴��������
		CreateBiTree(t->leftChild);
		//�ݹ鴴��������
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

BiTreeNode *Search(BiTree root, DataType x)//����Ԫ��x�Ƿ��ڶ�������
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
	
	printf("ǰ�������");
	PreOrder(root, Visit);
	printf("\n���������");
	InOrder(root, Visit);
	printf("\n���������");
	PostOrder(root, Visit);
	
	find=Search(root,x);
	if(find!=NULL)
		printf("\n����Ԫ��%c�ڶ������� \n",x);
	else
		printf("\n����Ԫ��%c���ڶ������� \n",x);
	
	Destroy(root);
	printf("\nѧ�ţ�2021211818 ��׿��");
	return 0;
}
