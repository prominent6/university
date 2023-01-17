//通过一趟遍历确定长度为n的单链表中值最大的节点
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
    cout<<"单链表中值最大的节点为第"<<count<<"个值为"<<max; 
}

int main()
{
    LinkList La;
    int n;
    cout<<"请输入需要创建的A集合元素的个数："<<endl;
    cin>>n;
	cout<<"请依次输入需要存入的数据："<<endl;
	CreateList(La,n);
	cout<<"集合A为：";
	display(La);
	
    COMList(La);
    return 0;
}
