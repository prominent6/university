//ջ���Ƚ���� 
#include <iostream>
#include <stdio.h>
#include <stdlib.h> 
#include <string>
#include <math.h>
#define OPSETSIZE 8 
using namespace std;

//��������� 
char OPSET[OPSETSIZE]={'+','-','*','/','(',')','#'}; 

int getIndex(char theta)   //��ȡtheta����Ӧ������  
	{  
	    int index = 0;  
	    switch (theta)  
	    {  
	    case '+':
	        index = 0;  
	        break;  
	    case '-':  
	        index = 1;  
	        break;  
	    case '*':  
	        index = 2;  
	        break;  
	    case '/':  
	        index = 3;  
	        break;  
	    case '(':  
	        index = 4;  
	        break;  
	    case ')':  
	        index = 5;  
	        break;  
	    case '#':  
	        index = 6;  
	    default:break;  
	    }  
	    return index;  
	}  
char getPriority(char theta1, char theta2)   //��ȡtheta1��theta2֮������ȼ�  
	{  
	    const char priority[][7] =     //���������ȼ���ϵ  
	    {  
	        { '>','>','<','<','<','>','>' },  
	        { '>','>','<','<','<','>','>' },  
	        { '>','>','>','>','<','>','>' },  
	        { '>','>','>','>','<','>','>' },  
	        { '<','<','<','<','<','=','0' },  
	        { '>','>','>','>','0','>','>' },  
	        { '<','<','<','<','<','0','=' },  
	    };  
	  
	    int index1 = getIndex(theta1);  
	    int index2 = getIndex(theta2);  
	    return priority[index1][index2];  
	} 


//�洢�����ջ 
typedef struct StackChar{
	char c;  //ջ��Ԫ�� 
	struct StackChar *next;
} SC;
//�洢�������ֵ�ջ 
typedef struct StackFloat{
	float f;  //ջ��Ԫ�� 
	struct StackFloat *next;
} SF;

//ѹ��Ԫ�� ǰ�� 
SC *Push(SC *s,char c){
	SC *p=(SC*)malloc(sizeof(SC));
	p->c=c;
	p->next=s;
	return p;
}
SF *Push(SF *s,float f){
	SF *p=(SF*)malloc(sizeof(SF));
	p->f=f;
	p->next=s;
	return p;
} 

//����ջ��Ԫ��
SC *Pop(SC *s){
	SC *q=s;
	s=s->next;
	free(s);
	return s; 
} 
SF *Pop(SF *s){
	SF *q=s;
	s=s->next;
	free(s);
	return s; 
} 

//�ж��Ƿ�λ�����
int IsOptr(char T){
	for(int i=0;i<OPSETSIZE;i++){
		if(T==OPSET[i]) return 1; 
	}
	return 0;
} 

//���㺯��operate
float operate(float a,unsigned char theta, float b)      //���㺯��Operate
{
	switch(theta)
	{
		case '+': return a+b; 
		case '-': return a-b; 
		case '*': return a*b; 
		case '/': return a/b; 
		default : return 0; 
	} 
} 
float EvaluateExpression(string s){
	SC *OPTR=NULL;
	SF *OPND=NULL;
	OPTR=Push(OPTR,'#'); //�������ջջ��ѹ��"#",����������־λ 
	int i=0;
	float a,b; 
	char theta;
	//�ַ��������꣬����ջ�л���Ԫ�� 
	while(s[i]!='#'){
		//������������
		if(!IsOptr(s[i])){
			OPND=Push(OPND,s[i]-48);
		}else{
			switch(getPriority(OPTR->c,s[i])){
				case '<':  //ջ��Ԫ�����ȼ��ͣ���ǰԪ��ֱ�ӽ������ջ
					OPTR=Push(OPTR,s[i]);
					break;
//				case '=': //������
//					OPTR=Pop(OPTR);
//					break;
				case '>':
					theta=OPTR->c;
					OPTR=Pop(OPTR);
					a=OPND->f;
					OPND=Pop(OPND);
					b= OPND->f;
					OPND=Pop(OPND);
					OPND=Push(OPND,operate(a,theta,b));
					if(OPTR->c=='(') OPTR=Pop(OPTR);
			}
		}
		i++;
	}
	while(OPTR->c!='#'){
					theta=OPTR->c;
					OPTR=Pop(OPTR);
					a=OPND->f;
					OPND=Pop(OPND);
					b= OPND->f;
					OPND=Pop(OPND);
					OPND=Push(OPND,operate(a,theta,b));
	}
	return OPND->f;
}
int main(){
	string s;
	puts("��������ʽ:(��#��β)"); 
	cin>>s;
	puts("�ñ��ʽ��ֵΪ:"); 
	printf("%f",EvaluateExpression(s));
	system("pause");
	return 0;
} 
