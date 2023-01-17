//栈：先进后出 
#include <iostream>
#include <stdio.h>
#include <stdlib.h> 
#include <string>
#include <math.h>
#define OPSETSIZE 8 
using namespace std;

//运算符数组 
char OPSET[OPSETSIZE]={'+','-','*','/','(',')','#'}; 

int getIndex(char theta)   //获取theta所对应的索引  
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
char getPriority(char theta1, char theta2)   //获取theta1与theta2之间的优先级  
	{  
	    const char priority[][7] =     //算符间的优先级关系  
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


//存储运算的栈 
typedef struct StackChar{
	char c;  //栈顶元素 
	struct StackChar *next;
} SC;
//存储运算数字的栈 
typedef struct StackFloat{
	float f;  //栈顶元素 
	struct StackFloat *next;
} SF;

//压入元素 前插 
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

//弹出栈顶元素
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

//判断是否位运算符
int IsOptr(char T){
	for(int i=0;i<OPSETSIZE;i++){
		if(T==OPSET[i]) return 1; 
	}
	return 0;
} 

//计算函数operate
float operate(float a,unsigned char theta, float b)      //计算函数Operate
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
	OPTR=Push(OPTR,'#'); //在运算符栈栈底压入"#",当作结束标志位 
	int i=0;
	float a,b; 
	char theta;
	//字符串遍历完，可能栈中还有元素 
	while(s[i]!='#'){
		//如果不是运算符
		if(!IsOptr(s[i])){
			OPND=Push(OPND,s[i]-48);
		}else{
			switch(getPriority(OPTR->c,s[i])){
				case '<':  //栈顶元素优先级低，当前元素直接进运算符栈
					OPTR=Push(OPTR,s[i]);
					break;
//				case '=': //脱括号
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
	puts("请输入表达式:(以#结尾)"); 
	cin>>s;
	puts("该表达式的值为:"); 
	printf("%f",EvaluateExpression(s));
	system("pause");
	return 0;
} 
