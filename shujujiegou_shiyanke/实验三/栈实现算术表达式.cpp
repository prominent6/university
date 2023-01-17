#include"stdio.h"
#include"stdlib.h" 
#include"string.h" 
#include"math.h"
#define true 1 
#define false 0 
#define OPSETSIZE 8 
typedef int Status; 
int getIndex(char theta);
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

//�����洢�����ջ 
typedef struct StackChar
{
	char c;   
	struct StackChar *next; 
}SC;     

//�����洢�������ֵ�ջ
typedef struct StackFloat
{
	float f; 
	struct StackFloat *next; 
}SF;      

SC *Push(SC *s,char c)      
{ //ѹ��Ԫ�� 
	SC *p=(SC*)malloc(sizeof(SC));  
	p->c=c; 
	p->next=s; 
	return p; 
} 
 
SF *Push(SF *s,float f)      
{ //ѹ��Ԫ��
	SF *p=(SF*)malloc(sizeof(SF)); 
	p->f=f; 
	p->next=s; 
	return p; 
} 
 
SC *Pop(SC *s)   
{//������char���͵Ĳ�����ջ��ջ��Ԫ�ص���ջ 
	SC *q=s;  
	s=s->next; 
	free(q); 
	return s; 
} 
 
SF *Pop(SF *s)   
{//������float���͵�ջ��ջ��Ԫ��(�����������)����ջ 
	SF *q=s; 
	s=s->next; 
	free(q); 
	return s; 
} 
 
float Operate(float a,unsigned char theta, float b)      //���㺯��Operate
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
 
char OPSET[OPSETSIZE]={'+','-','*','/','(',')','#'}; 

Status In(char Test,char *TestOp)
{//IN���������ж���ǰԪ���Ƿ�Ϊ����� 
	int Find=false; 
	for (int i=0; i< OPSETSIZE; i++)
	{
		if(Test == TestOp[i])
			Find= true; 
	} 
	return Find; //��������������1(TURE),���򷵻�0(FALSE) 
} 

 
float EvaluateExpression(char* MyExpression)//��������ʽ(MyExpression)���봦���� 
{ 
	// �������ʽ��ֵ����������㷨
	// ��OPTR��OPND�ֱ�Ϊ�����(operator)ջ��������(operand)ջ��OPΪ��������� 
	SC *OPTR=NULL;       // �����ջ���ַ�Ԫ�� 
	SF *OPND=NULL;       // ������ջ��ʵ��Ԫ�� 
	char TempData[20]; 
	float Data,a,b; 
	char theta,*s,Dr[]={'#','\0'}; 
	OPTR=Push(OPTR,'#'); //�������ջջ��ѹ��"#",����������־λ 
	s=strcat(MyExpression,Dr); //��������ʽĩβ���Dr[]={'#','\0'} 
	strcpy(TempData,"\0");  //�ַ����������� 
	while (*s!= '#' || OPTR->c!='#') //ֻҪ������ʽcδѭ����ĩβ(cָ��Ϊĩβ��"#"),����OPTRջδ��ջ�� 
	{ 
		if (!In(*s, OPSET))  //�����s��ָ��Ĳ�������� 
		{ 
			Dr[0]=*s;              
			strcat(TempData,Dr);           //�ַ������Ӻ��� 
			s++; 
			if (In(*s, OPSET))
			{ 
				Data=atof(TempData);       //atof(ascii to float)�ַ���ת������(double),���ַ�ת��Ϊdouble���� 
				OPND=Push(OPND, Data);      //������ѹ�� 
				strcpy(TempData,"\0"); 
			} 
		} 
		else    // ����������ջ 
		{
			 
			switch (getPriority(OPTR->c, *s))  //�жϵ������,��ջ������������ȼ���С 
			{
			case '<': // ջ��Ԫ�����ȼ���,��ǰԪ��ֱ�ӽ�ջ 
				OPTR=Push(OPTR, *s);    
				s++; 
				break; 
			case '=': // �����Ų�������һ�ַ� 
				OPTR=Pop(OPTR); 
				s++; 
				break; 
			case '>': // ��ջ������������ջ,
				theta=OPTR->c;OPTR=Pop(OPTR); 
				b=OPND->f;OPND=Pop(OPND); 
				a=OPND->f;OPND=Pop(OPND); 
				OPND=Push(OPND, Operate(a, theta, b)); 
				break; 
			} 
		} 
	}
	return OPND->f; 
}  
 
int main(void)
{ 
	char s[128];
	puts("��������ʽ:"); 
	gets(s);
	puts("�ñ��ʽ��ֵΪ:"); 
	printf("%s\b=%g\n",s,EvaluateExpression(s));
	printf("\nѧ�ţ�2021211818 ��׿��");
	return 0;
}

