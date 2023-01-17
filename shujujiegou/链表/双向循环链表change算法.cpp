#include<stdio.h>
#include<stdlib.h>
typedef struct DLnode 
{
	int data;
	struct DLnode *prior;
	struct DLnode *next;
}DLnode, *LinkList;
 
int InitList(LinkList &L) 
{
	L = new DLnode;
	L->next = L;
	L->prior = L;
	return 1;
}
 
void DisplayList(LinkList L) 
{
	DLnode *p;
	p = L->next;
	
	while (p != L) 
	{
		printf("%d ", p->data);
		p = p->next;
	}
	
	printf("\n");
}
 
int ListLength(LinkList &L) 
{
	DLnode *p;
	p = L->next;
	int length = 0;
	while (p!=L) 
	{
		length++;
		p = p->next;
	}
	
	return length;
}
 
void CreateList(LinkList &L, int &n)   //β�巨����
{
	L = new DLnode;
	L->next = L;
	L->prior = L;
	DLnode *p;
	p = L;
	
	for (int i = 0; i < n; i++) 
	{
		printf("�������%d��Ԫ�ص�ֵ:", i + 1);
		DLnode *s;
		s = new DLnode;
		scanf("%d", &s->data);
		p->next = s;
		s->next = L;
		s->prior = p;
		p = s;
	}
}
 
void Change(LinkList p) 
{
	DLnode *q;
	q = p->prior;
	
	q->prior->next = p;          // p��ǰ����ǰ��֮���Ϊp
	p->prior = q->prior;    // p��ǰ��ָ����ǰ����ǰ����
	
	q->next = p->next;    // p��ǰ���ĺ��Ϊp�ĺ�̡� 
	p->next->prior = q;   // p�ĺ�̵�ǰ��ָ��ԭp��ǰ��
	
	q->prior = p;     // p����ǰ������
	p->next = q;    // p�ĺ��ָ����ԭ����ǰ��
}
 
int main() 
{
	LinkList L;	
	if (InitList(L)) 
	{
		printf("L��ʼ���ɹ�\n");
	}
	else 
	{
		printf("L��ʼ��ʧ��.\n");
	}
	printf("����������Ԫ�ظ���:");
	int n;
	scanf("%d", &n);
	CreateList(L, n);
	DisplayList(L);
	printf("������:%d\n", ListLength(L));
	
	printf("������Ҫ�����Ľ���ֵ:");
	DLnode *s;
	s = new DLnode;
	scanf("%d", &s->data);
	DLnode *p;
	p = L->next;
	while (p != L) 
	{
		if (p->data == s->data)     //��ֵѰ�ҽڵ�
		{
			Change(p);

			break;
		}
		else 
		{
			p = p->next;
		}
	}
	
	DisplayList(L);
 
	return 0;
}

