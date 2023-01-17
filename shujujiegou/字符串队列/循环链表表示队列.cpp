//�����Դ�ͷ����ѭ�������ʾ�жӣ�����ֻ��һ��ָ��ָ���βԪ�ؽ�㣨ע�ⲻ��ͷָ�룩��
//�Ա�д��Ӧ���ÿնӡ��жӿա���Ӻͳ��ӵ��㷨��
#include <stdio.h>
#include <stdlib.h>
 
typedef int elemType;
typedef struct queuenode
{
	elemType data;
	struct queuenode *next;
}queuenode,*LinkQueue;
 
typedef struct
{
	LinkQueue rear;  //ֻ��һ��ָ���βԪ�ص�ָ�� 
	int length;
}sqqueue;
 
/*��ʼ���ж�*/
void initQueue(sqqueue &Q)
{
	Q.rear=(LinkQueue)malloc(sizeof(Q));
	Q.rear->next=Q.rear;
}
/*�ÿն�*/ 
int emptyQueue(sqqueue &Q)
{
	if(Q.rear->next==Q.rear)  //����βָ��ָ��ͷ��� 
		return 1;
	else
		return 0;
}
/*���*/
int enqueue(sqqueue &Q,elemType e)
{   /*��β��㴦����Ԫ��*/
	LinkQueue p;
	p=(LinkQueue)malloc(sizeof(Q));  //�����½�� 
	if(!p)
		return 0;
	/*��ʼ���½�㲢����*/ 
	p->data=e;
	p->next=Q.rear->next;
	Q.rear->next=p;
	Q.rear=p;  //��βָ�������½�� 
	return 1;
}
/*����*/
int delqueue(sqqueue &Q,elemType &e)
{
	LinkQueue p;
	if(Q.rear->next==Q.rear)
		return 0;  //������Ϊ�շ���0
	p=Q.rear->next->next;  //ѭ��������ж�βָ����һ���(Ҳ��ͷ���)����һ���(����ͷָ��)����p 
	e=p->data;  // �������е����� 
	Q.rear->next->next=p->next;  //ժ�½��p 
	free(p);   //�ͷű�ɾ��� 
	return 1;
}
 
int main()
{
	sqqueue m;
	elemType num;
	initQueue(m);
	if(emptyQueue(m))
		printf("�ö���ĿǰΪ��!\n");
	else
		printf("�ö��в�Ϊ��!\n");
	for(int i=1;i<=10;i++)
		{
			if(enqueue(m,i))
			printf("Ԫ��%d�ɹ�����!\n",i);
		}
	printf("\n\n");
	for(int j=1;j<=10;j++)
		{
			if(delqueue(m,num))
			printf("Ԫ��%d�ɹ�����!\n",num);
		}
	if(emptyQueue(m))
		printf("�ö���ĿǰΪ��!\n");
	else
		printf("�ö��в�Ϊ��!\n");
	return 0;
}
