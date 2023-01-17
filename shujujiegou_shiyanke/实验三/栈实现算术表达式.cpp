#include"stdio.h"
#include"stdlib.h" 
#include"string.h" 
#include"math.h"
#define true 1 
#define false 0 
#define OPSETSIZE 8 
typedef int Status; 
int getIndex(char theta);
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

//用来存储运算的栈 
typedef struct StackChar
{
	char c;   
	struct StackChar *next; 
}SC;     

//用来存储运算数字的栈
typedef struct StackFloat
{
	float f; 
	struct StackFloat *next; 
}SF;      

SC *Push(SC *s,char c)      
{ //压入元素 
	SC *p=(SC*)malloc(sizeof(SC));  
	p->c=c; 
	p->next=s; 
	return p; 
} 
 
SF *Push(SF *s,float f)      
{ //压入元素
	SF *p=(SF*)malloc(sizeof(SF)); 
	p->f=f; 
	p->next=s; 
	return p; 
} 
 
SC *Pop(SC *s)   
{//用来将char类型的操作符栈的栈顶元素弹出栈 
	SC *q=s;  
	s=s->next; 
	free(q); 
	return s; 
} 
 
SF *Pop(SF *s)   
{//用来将float类型的栈的栈顶元素(被运算的数字)弹出栈 
	SF *q=s; 
	s=s->next; 
	free(q); 
	return s; 
} 
 
float Operate(float a,unsigned char theta, float b)      //计算函数Operate
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
{//IN函数用来判定当前元素是否为运算符 
	int Find=false; 
	for (int i=0; i< OPSETSIZE; i++)
	{
		if(Test == TestOp[i])
			Find= true; 
	} 
	return Find; //如果是运算符返回1(TURE),否则返回0(FALSE) 
} 

 
float EvaluateExpression(char* MyExpression)//将运算表达式(MyExpression)传入处理函数 
{ 
	// 算术表达式求值的算符优先算法
	// 设OPTR和OPND分别为运算符(operator)栈和运算数(operand)栈，OP为运算符集合 
	SC *OPTR=NULL;       // 运算符栈，字符元素 
	SF *OPND=NULL;       // 运算数栈，实数元素 
	char TempData[20]; 
	float Data,a,b; 
	char theta,*s,Dr[]={'#','\0'}; 
	OPTR=Push(OPTR,'#'); //在运算符栈栈底压入"#",当作结束标志位 
	s=strcat(MyExpression,Dr); //给运算表达式末尾添加Dr[]={'#','\0'} 
	strcpy(TempData,"\0");  //字符串拷贝函数 
	while (*s!= '#' || OPTR->c!='#') //只要运算表达式c未循环到末尾(c指向不为末尾的"#"),或则OPTR栈未到栈底 
	{ 
		if (!In(*s, OPSET))  //如果当s所指向的不是运算符 
		{ 
			Dr[0]=*s;              
			strcat(TempData,Dr);           //字符串连接函数 
			s++; 
			if (In(*s, OPSET))
			{ 
				Data=atof(TempData);       //atof(ascii to float)字符串转换函数(double),把字符转化为double类型 
				OPND=Push(OPND, Data);      //操作数压入 
				strcpy(TempData,"\0"); 
			} 
		} 
		else    // 是运算符则进栈 
		{
			 
			switch (getPriority(OPTR->c, *s))  //判断当运算符,和栈顶运算符的优先级大小 
			{
			case '<': // 栈顶元素优先级低,当前元素直接进栈 
				OPTR=Push(OPTR, *s);    
				s++; 
				break; 
			case '=': // 脱括号并接收下一字符 
				OPTR=Pop(OPTR); 
				s++; 
				break; 
			case '>': // 退栈并将运算结果入栈,
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
	puts("请输入表达式:"); 
	gets(s);
	puts("该表达式的值为:"); 
	printf("%s\b=%g\n",s,EvaluateExpression(s));
	printf("\n学号：2021211818 苏卓萱");
	return 0;
}

