//pΪ��ǰ�ڵ㣬preָ��ǰһ���ڵ� 
#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
struct link  //Ϊ����ڵ������ 
{
	int data;
	struct link *next;
};
//�����ڵ� ������ֵΪ�ڵ�ĵ�ַ 
struct link *CreatNode()
{
	//����ڵ������ڴ�
	struct link *p; 
	//��ֵ����Ҫһ�£�ǿ��ת�����ұ�ԭ����Ϊvoid*����>ʲô���Ͷ����� 
	p=(struct link*) malloc(sizeof(struct link));
	
	//����ʧ�ܣ��˳�����
	if(p==NULL){
		printf("no enough memory to alloc");
		exit(0);
	} 
	
	//Ϊ�½��ڵ㸳ֵ
	p->next=NULL; //�½��Ľڵ�ָ���򸳿�ָ�� 
	 
	//�������� 
	printf("input:\n");
	scanf("%d",&(p->data)); //ͨ��p�ҵ�data ,p�����ڽڵ� 
	p->next=NULL;
	return p;
}


//��������
struct link*createlist(void){
	struct link *head=NULL,; //��ʼΪ������
	struct link *p=NULL��*pre=NULL;
	char c;
	printf("��ʼ��");
	do{ 
		printf("\n'y' to insert one new node,'n' to finish: ");
		scanf(" %c",&c);
		//...
		//1. �����ڵ�
		p=CreatNode();
		//2. �ѽڵ�����������
		if(head==NULL) head=p;  //����ǵ�һ���ڵ㣬���½ڵ�����ͷ�ڵ��
		else pre->next=p;  //���ǵ�һ���ڵ㣬���½��ڵ�ӵ�����Ľ�βpre��
		pre=p;   //��pre��Զָ��p��ǰһ���ڵ㣬Ϊ��һ��������׼�� 
	}while(1);
}  

//�������������
void PrintList(struct link *head){
	struct link *p;
	p=head;
	if(head==NULL) //�ж��Ƿ�Ϊ������
	{
		prinf("..."); 
	}else {
		while(p!=NULL){
			printf("%5d\n",p->data);
			p=p->next;
		}
	} 
} 

//�ͷ��ڴ� ��pʱ�ͷ�pre���ڴ� 
struct link *DeleteMemory(struct link *head){
	struct link *p=head,*pre=NULL;
	while(p!=NULL){
		pre=p;
		p=p->next;
		free(pre); 
	}
	return head=NULL;
} 


//�������в���ڵ� 
