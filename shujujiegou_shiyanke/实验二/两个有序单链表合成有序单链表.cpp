#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
/*=====================================*/
typedef int DataType;
typedef struct Node
{
    DataType data;
    struct Node *next;
} SLNode;

void ListInitiate(SLNode **head)/*��ʼ��*/
{
    if((*head = (SLNode *)malloc(sizeof(SLNode))) == NULL) exit(1);
    (*head)->next = NULL;
}

int ListLength(SLNode *head)               /* ������ĳ���*/
{
    SLNode *p = head;
    int size = 0;

    while(p->next != NULL)
    {
        p = p->next;
        size ++;
    }
    return size;
}

int ListInsert(SLNode *head, int i, DataType x)
/*�ڴ�ͷ���ĵ�����head������Ԫ��ai��0 �� i �� size�����ǰ*/
/*����һ���������Ԫ��x�Ľ��*/
{
    SLNode *p, *q;
    int j;

    p = head; 
    j = -1;
    while(p->next != NULL && j < i - 1)
    {
        p = p->next;
        j++;
    }

    if(j != i - 1)
    {
        printf("����λ�ò�����");
        return 0;
    }

    if((q = (SLNode *)malloc(sizeof(SLNode))) == NULL) exit(1);
    q->data = x;
    q->next=p->next;
    p->next = q;
    return 1;
}

int ListGet(SLNode *head, int i, DataType *x)
/*ȡ����Ԫ��ai��ɾ��������ͬ��ֻ�ǲ�ɾ������Ԫ��ai���*/
{
    SLNode *p;
    int j;

    p = head;
    j = -1;
    while(p->next != NULL && j < i)
    {
        p = p->next;
        j++;
    }

    if(j != i)
    {
        printf("ȡԪ��λ�ò�����");
        return 0;
    }
    *x = p->data;
    return 1;
}

void Destroy(SLNode **head)
{
    SLNode *p, *p1;

    p = *head;
    while(p != NULL)
    {
        p1 = p;
        p = p->next;
        free(p1);
    }
    *head = NULL;
}

void MergeList(SLNode *head1,SLNode *head2,SLNode **head3)
{
    int i=0,j=0,k=0,ai,bj;
    int La_len=ListLength(head1),Lb_len=ListLength(head2);
    while(i<La_len && j<Lb_len)
    {
        ListGet(head1,i,&ai);
        ListGet(head2,j,&bj);
        if(ai<=bj)
        {
            ListInsert(*head3,k++,ai);
            i++;
        }
        else
        {
            ListInsert(*head3,k++,bj);
            j++;
        }
    }
    while(i<La_len)
    {
        ListGet(head1,i++,&ai);
        ListInsert(*head3,k++,ai);
    }
    while(j<Lb_len)
    {
        ListGet(head2,j++,&bj);
        ListInsert(*head3,k++,bj);
    }
}
int main(void)
{
    SLNode *head1,*head2,*head3;
    int i , x;
    ListInitiate(&head1);/*��ʼ��*/
    ListInitiate(&head2);
    ListInitiate(&head3);
    for(i = 0; i < 10; i++)
    {
        if(ListInsert(head1, i,i*2) == 0) /*����10������Ԫ��*/
        {
            printf("����! \n");
            return 1;
        }
        if(ListInsert(head2,i,i*2+1)==0)
        {
            printf("����\n");
            return 1;
        }
    }
    printf("head1:");
    for(i = 0; i < ListLength(head1); i++)
    {
        if(ListGet(head1, i, &x) == 0) /*ȡԪ��*/
        {
            printf("����! \n");
            return 1;
        }
        else printf("%d ", x);/*��ʾ����Ԫ��*/
    }
    printf("\nhead2:");
    for(i = 0; i < ListLength(head2); i++)
    {
        if(ListGet(head2, i, &x) == 0) /*ȡԪ��*/
        {
            printf("����! \n");
            return 1;
        }
        else printf("%d ", x);/*��ʾ����Ԫ��*/
    }
    MergeList(head1,head2,&head3);
    printf("\nhead3:");
    for(i = 0; i < ListLength(head3); i++)
    {
        if(ListGet(head3, i, &x) == 0) /*ȡԪ��*/
        {
            printf("����! \n");
            return 1;
        }
        else printf("%d ", x);/*��ʾ����Ԫ��*/
    }
    Destroy(&head1);
    Destroy(&head2);
    Destroy(&head3);
	printf("\nѧ�ţ�2021211818 ��׿��");
}


