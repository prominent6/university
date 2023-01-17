#include <stdio.h>
#include <stdlib.h>
typedef struct{ //�ͻ�����Ϣ�ṹ 
	int arrive;
	int treat;
} QNODE;
typedef struct node{
	QNODE data;
	struct node *next;//�����е�Ԫ����Ϣ
}LNODE,*QueuePtr;

LNODE *front,*rear;    // ��ͷָ��Ͷ�βָ��
QNODE temp,c; //�ݴ����

//����
void enQueue(QNODE c){
	QueuePtr p=(QueuePtr)malloc(sizeof(LNODE));
	if(!p) exit(0);
	p->data=c;
	p->next=NULL;
	rear->next=p;
	rear=p;
} 

//����
int deQueue(QNODE *e)
{
	QueuePtr p;
	if(front==rear)
		return 0;
    *e=front->next->data; // ����ɾ���Ķ�ͷ����ֵ��ֵ��e
    p=front->next;				// ����ɾ���Ķ�ͷ����ݴ��p
	front->next=front->next->next;
	if(rear==p)		// ����ͷ���Ƕ�β����ɾ����rearָ��ͷ���
		rear=front;
	free(p);
	return 1;
}
int main(void){	//����ͳ�Ƴ�ֵ��ҵ��Ա�ȴ�ʱ�䣬�ͻ��ܵȴ�ʱ�䣬�ͻ�������
	int dwait=0,cwait=0,count=0,finish; 
	//���õ�ǰʱ��clockʱ��Ϊ0��//�ñ���clock��ģ�⵱ǰʱ��
	int clock=0;
	
	FILE *fp;
	int have=0;
	if((fp=fopen("data.txt","r"))==NULL){
		printf("�ļ��򿪳���");
		return 0; 
	}
	
	//�����һλ�ͻ���Ϣ���ݴ������
	have=fscanf(fp,"%d %d",&temp.arrive,&temp.treat); //����ֵ���ڴ��ļ���һ�ζ������������ݵĸ������������2

	//����ն���
    front=rear=(QueuePtr)malloc(sizeof(LNODE));
    front->next=NULL;//��ָֹ����ָ
    
	do{//Լ��ÿ��ѭ����������һλ�ͻ�
		if(front==rear&&have==2) //�ȴ�����Ϊ��(front==rear)�����һ��пͻ�
		{   
			dwait+=(temp.arrive-clock); //�ۼ�ҵ��Ա�ܵȴ�ʱ�䣻
		 	clock=temp.arrive; //ʱ���ƽ����ݴ�����еĿͻ��ĵ���ʱ�䣻
		  	enQueue(temp); //�ݴ�����еĿͻ���Ϣ���ӣ�
		  	have=fscanf(fp,"%d %d",&temp.arrive,&temp.treat); //��ȡ��һλ�ͻ���Ϣ���ݴ������
		}
		deQueue(&c);  	//�ӵȴ����г���һλ�ͻ���
		count++; //�ۼƿͻ�������
		cwait+=(clock-c.arrive); //���ÿͻ��ĵȴ�ʱ���ۼƵ��ͻ����ܵȴ�ʱ�䣻//=��ǰʱ��-�ͻ�����ʱ��
		finish=(clock+c.treat); 	 //�趨��ǰ�ͻ���ҵ��������ʱ��
		while(temp.arrive<=finish&&have==2) //��һλ�ͻ��ĵ���ʱ���ڵ�ǰ�ͻ��������֮ǰ�����һ��пͻ�
		{
			enQueue(temp); //�ݴ�����еĿͻ���Ϣ���ӣ�
		 	have=fscanf(fp,"%d %d",&temp.arrive,&temp.treat);//��ȡ��һλ�ͻ���Ϣ���ݴ������
		}
		clock=finish; //ʱ���ƽ�����ǰ�ͻ��������ʱ��
	}while(have==2||front!=rear);//�ȴ����в�Ϊ��(front!=reat)���߻��пͻ���have==2��
	
	printf("ҵ��Ա�ȴ�ʱ��:%d,�ͻ�ƽ���ȴ�ʱ�䣺%f\n",dwait,(double)cwait/count);
	printf("ģ����ʱ��: %d\n�ͻ�����: %d\n�ͻ��ܵȴ�ʱ��: %d\n",clock,count,cwait);
	printf("\nѧ�ţ�2021211818 ��׿��");
	return 0;
}
