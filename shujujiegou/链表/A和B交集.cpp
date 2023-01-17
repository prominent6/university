#include <iostream>
#include <malloc.h>
using namespace std;
typedef struct LNode{
	int data;
	LNode *next;
} LNode,*LinkList;
void CreateList(LinkList &L,int n){
	LNode *p,*r;
	int i;
	L=(LinkList)malloc(sizeof(struct LNode));
	p=(LinkList)malloc(sizeof(struct LNode));
	L->next=NULL;
	r=L;
	for(i=0;i<n;i++){
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
//����
void MergeList_L(LinkList &La,LinkList &Lb)
{
    LNode *pa;LNode *pb;LNode *pc;LNode *p;
    p=(LinkList)malloc(sizeof(struct LNode));
    pa=La->next;pb=Lb->next;  //�蹤��ָ��ֱ�Ϊpa��pb
    pc=La; ////������е�ǰ�ϲ�����ǰ��ָ��
    while(pa&&pb)
    {
        if(pa->data==pb->data)
        {
            pc->next=pa; //A�н�����ӵ������
            pc=pa; 
            pa=pa->next;
            p=pb; ////B�н���ͷ�
            pb=pb->next; 
            free(p);
        }else if (pa->data<pb->data){
        	p=pa;
        	pa=pa->next;  //A����ָ�� 
        	free(p);
		}else{
			p=pb;
        	pb=pb->next;  //B����ָ�� 
        	free(p);
		}
    }
    while(pa){ //A�ѱ����꣬Bδ��
		p=pa;
		pa=pa->next;
		free(p) ; //�ͷ�B��ʣ����
	}
    while(pb){ //B�ѱ����꣬Aδ��
		p=pb;
		pb=pb->next;
		free(p) ; //�ͷ�A��ʣ����
	}
	pc->next=NULL; //�ý������βָ��ΪNULL
	free (Lb) ; //�ͷ�B���ͷ���
}
int main(){
	LinkList La;LinkList Lb;int n;
	cout<<"��������Ҫ������A����Ԫ�صĸ�����"<<endl;
	cin>>n;
	cout<<"������������Ҫ���������(β�巨&&����)��"<<endl;
	CreateList (La,n);
	
	cout<<"��������Ҫ������B����Ԫ�صĸ�����"<<endl;
	cin>>n;
	cout<<"������������Ҫ���������(β�巨&&����)��"<<endl;
	CreateList (Lb,n);
	
	cout<<"����AΪ��";
	display(La);
	cout<<"����BΪ��";
	display(Lb);
	 
	MergeList_L(La,Lb);
	cout<<"���ߵĽ���Ϊ��";
 
	display(La);
	return 0;
}
