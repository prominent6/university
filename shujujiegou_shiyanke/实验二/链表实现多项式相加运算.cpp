#include<stdio.h>
#include<stdlib.h>
 
typedef struct Node
{
    float ratio; //ϵ��
    int index; //ָ��
    struct Node *next; //��һ��ָ����
}*PNode,*LinkList;
 
LinkList Create_Link()
{
    LinkList head;
    PNode p,q;
    float ratio;//ϵ��
    int index;//ָ��
 
    //����������
    head=(struct Node*)malloc(sizeof(struct Node));
    head->next=NULL;
 
    q=head;
    scanf("%f,%d",&ratio,&index);
    while(ratio!=0 || index!=0)//����������ϵ����ָ��ͬʱΪ0
    {
        p=(struct Node*)malloc(sizeof(struct Node));//���½�����ռ�
        p->next=NULL;
        //����β�巨�ķ�ʽ�����µĽ��
        q->next=p;
        q=p;
        p->index=index;
        p->ratio=ratio;
        scanf("%f,%d",&ratio,&index);
    }
    return head;
}
 
void Sort_Link(LinkList head)
{
    PNode p,q;
    //�����м�����������ݵĽ���
    float temp1;
    int temp2;
    //����ð������
    for(p=head->next;p!=NULL;p=p->next)
        for(q=p->next;q!=NULL;q=q->next)
        {
            if(q->index < p->index)
            {
                temp1=q->ratio;
                q->ratio=p->ratio;
                p->ratio=temp1;
                
                temp2=q->index;
                q->index=p->index;
                p->index=temp2;
            }
        }
 
}
 
 
//��llist1Ϊ����������� 
void Add_List(LinkList llist1,LinkList llist2)
{
    PNode p,q,pre,temp;
    p=llist1->next;
    q=llist2->next;
    pre=llist1;//ʼ����pre��ʾp��ǰһ�����
    while(p&&q)
    {
    	//���llist2��ָ��С��llist1��ָ�� 
        if(q->index < p->index)//����ǰ��
        {
	        temp=q->next;//��ֹllist2�Ķ�ʧ
	        q->next = p;
	        pre->next = q;
	        pre=q;
	        q=temp;
        }else if(q->index > p->index)//��������
        {
            pre=p;
            p=p->next;
        }else
		{
            if(q->ratio + p->ratio == 0)//���ϵ��Ϊ0������ɾ��
            {
                pre->next=p->next;
                free(p);
            }else
            {
            	p->ratio=p->ratio+q->ratio;
                pre=p;
            }
            p=pre->next;
            temp=q;
            q=q->next;
        	free(temp);
        }
    }
    if(q)//���q�����н�㣬ֱ�Ӳ��뵽llist1��ĩβ����
    {
        pre->next=q;
    }
    free(llist2);
}
 
void print(LinkList head)
{
    PNode p;
    for(p=head->next;p!=NULL;p=p->next)
    {
        printf("%.0f,%d  ",p->ratio,p->index);
    }
}
 
int main()
{
    LinkList llist1=Create_Link();
    LinkList llist2=Create_Link();
    Sort_Link(llist1);
    Sort_Link(llist2);
    Add_List(llist1,llist2);
    print(llist1);
	printf("\nѧ�ţ�2021211818 ��׿��");
}

