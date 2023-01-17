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
//交集
void MergeList_L(LinkList &La,LinkList &Lb)
{
    LNode *pa;LNode *pb;LNode *pc;LNode *p;
    p=(LinkList)malloc(sizeof(struct LNode));
    pa=La->next;pb=Lb->next;  //设工作指针分别为pa和pb
    pc=La; ////结果表中当前合并结点的前驱指针
    while(pa&&pb)
    {
        if(pa->data==pb->data)
        {
            pc->next=pa; //A中结点链接到结果表
            pc=pa; 
            pa=pa->next;
            p=pb; ////B中结点释放
            pb=pb->next; 
            free(p);
        }else if (pa->data<pb->data){
        	p=pa;
        	pa=pa->next;  //A后移指针 
        	free(p);
		}else{
			p=pb;
        	pb=pb->next;  //B后移指针 
        	free(p);
		}
    }
    while(pa){ //A已遍历完，B未完
		p=pa;
		pa=pa->next;
		free(p) ; //释放B中剩余结点
	}
    while(pb){ //B已遍历完，A未完
		p=pb;
		pb=pb->next;
		free(p) ; //释放A中剩余结点
	}
	pc->next=NULL; //置结果链表尾指针为NULL
	free (Lb) ; //释放B表的头结点
}
int main(){
	LinkList La;LinkList Lb;int n;
	cout<<"请输入需要创建的A集合元素的个数："<<endl;
	cin>>n;
	cout<<"请依次输入需要存入的数据(尾插法&&递增)："<<endl;
	CreateList (La,n);
	
	cout<<"请输入需要创建的B集合元素的个数："<<endl;
	cin>>n;
	cout<<"请依次输入需要存入的数据(尾插法&&递增)："<<endl;
	CreateList (Lb,n);
	
	cout<<"集合A为：";
	display(La);
	cout<<"集合B为：";
	display(Lb);
	 
	MergeList_L(La,Lb);
	cout<<"二者的交集为：";
 
	display(La);
	return 0;
}
