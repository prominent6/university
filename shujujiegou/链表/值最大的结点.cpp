//ͨ��һ�˱���ȷ������Ϊn�ĵ�������ֵ���Ľڵ�
#include <iostream>
#include <malloc.h>
using namespace std;
typedef struct LNode
{
    int data;
    LNode *next;
} LNode,*LinkList;
void CreateList(LinkList &L,int n){
	LNode *p,*r;
	int i;
	L=(LinkList)malloc(sizeof(struct LNode));
	L->next=NULL;
	r=L;
	for(i=0;i<n;i++){
		p=(LinkList)malloc(sizeof(struct LNode));
		cin>>p->data;
		p->next=NULL;
		r->next=p;
		r=p;
	}
	return;
}
void display(LinkList L){
	LNode *p;
	p=L->next;
	cout<<"{";
	while(p){
		cout<<p->data<<" ";
		p=p->next;
	}
	cout<<"}"<<endl;
	return;
} 
 
void COMList(LinkList &la)
{
    LNode *p;
    int max = 0;
    int count = 1;
    int i = 0;
    int temp = 1;
    p = la->next;
    max = p->data;
    while (p)
    {
        i++;
        if (p->data > max)
        {
            max = p->data;
            count = count + i - temp;
            temp = i;
        } 
        p = p->next;
    }
    cout<<"��������ֵ���Ľڵ�Ϊ��"<<count<<"��ֵΪ"<<max; 
}

int main()
{
    LinkList La;
    int n;
    cout<<"��������Ҫ������A����Ԫ�صĸ�����"<<endl;
    cin>>n;
	cout<<"������������Ҫ��������ݣ�"<<endl;
	CreateList(La,n);
	cout<<"����AΪ��";
	display(La);
	
    COMList(La);
    return 0;
}
