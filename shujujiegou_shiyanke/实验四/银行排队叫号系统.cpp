#include <stdio.h>
#include<stdlib.h>
typedef struct{
   int arrive;
   int treat;
}QNODE;

typedef struct node{
	QNODE data;
	struct node *next; 
}LNODEA,*LNODEPtr,LNODEB;

LNODEA *frontA,*rearA;
LNODEB *frontB,*rearB;

//���
void EnQueueA(QNODE e)
{
	LNODEPtr s=(LNODEPtr)malloc(sizeof(LNODEA));
	if(!s) 
		exit(0);
	s->data=e;
	s->next=NULL;
	rearA->next=s;	
	rearA=s;		
}
void EnQueueB(QNODE e)
{
	LNODEPtr s=(LNODEPtr)malloc(sizeof(LNODEB));
	if(!s) 
		exit(0);
	s->data=e;
	s->next=NULL;
	rearB->next=s;	
	rearB=s;
}

//����
int DeQueueA(QNODE *e)
{
	LNODEPtr p;
	if(frontA==rearA)
		return 0;
    *e=frontA->next->data; 
    p=frontA->next;				
	frontA->next=frontA->next->next;
	if(rearA==p)		
		rearA=frontA;
	free(p);
	return 1;
}
int DeQueueB(QNODE *e)
{
	LNODEPtr p;
	if(frontB==rearB)
		return 0;
    *e=frontB->next->data; 
    p=frontB->next;				
	frontB->next=frontB->next->next;
	if(rearB==p)		
		rearB=frontB;
	free(p);
	return 1;
}

int main()
{
    int cnt=0; //��cnt���ͻ� 
    int have=0;
    int countA=0,countB=0; //����A���ڵ��ˣ�B���ڵ��� 
    int lastA=0,lastB=0; //�ö������һλ���˽���ʱ�� 

    QNODE temp,e;
    frontA=rearA=(LNODEPtr)malloc(sizeof(LNODEA));
    frontA->next=NULL;
    frontB=rearB=(LNODEPtr)malloc(sizeof(LNODEB));
    frontB->next=NULL;

    FILE *fp; 
    if((fp=fopen("data.txt","r"))==NULL){
		printf("�ļ��򿪳���");
		return 0; 
	}
    have= fscanf(fp,"%d %d",&temp.arrive,&temp.treat);
    do{
        if( have==2 && frontA==rearA && frontB==rearB )
        {
        	printf("�˿�%d��A����%d��\n",++cnt,++countA);
        	EnQueueA(temp);
	        lastA=temp.arrive+temp.treat;
            have= fscanf(fp,"%d %d",&temp.arrive,&temp.treat);
        }
        if(lastA<=lastB){
        	DeQueueA(&e);
        	printf("�˿�%d��A����%d��\n",++cnt,++countA);
        	EnQueueA(temp);
        	if(lastA>=temp.arrive) lastA+=temp.treat;
        	else lastA=temp.arrive+temp.treat;
		}else{
			if(frontB!=rearB) DeQueueB(&e);
        	printf("�˿�%d��B����%d��\n",++cnt,++countB);
        	EnQueueB(temp);
        	if(lastB>=temp.arrive) lastB+=temp.treat;
        	else lastB=temp.arrive+temp.treat;
		}
		have= fscanf(fp,"%d %d",&temp.arrive,&temp.treat);
    }while(have==2);
	printf("\nѧ�ţ�2021211818 ��׿��");
    return 0;
}


