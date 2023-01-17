//从键盘输入后缀表达式/逆波兰表达式 操作数后输入空格 操作符只有+-*/ 
//已实现多位数的运算 
#include <iostream>
#include <string>
using namespace std;

string s;  //后缀表达式字符串
int OPND[100]; //操作数栈
int topN=-1;

//栈的基本操作
void push(int *OPND,int val){
        OPND[++topN]=val;
}
int pop(int *OPND){
        return OPND[topN--];
}
int getTop(int *OPND){
    return OPND[topN];
}

int operate(int a,char theta,int b){
    switch(theta){
	    case '+':{
	            return a+b;
	    }
	    case '-':{
	            return a-b;
	    }
	    case '*':{
	            return a*b;
	    }
	    case '/':{
	            return a/b;
	    }
 	}
 	return 0;
}

int calculation(string s){
	int i=0;
	int a,b,c=0;
    char theta;
	while(s[i]!='$'){ 
		if(s[i]>48&&s[i]<58){
			c=c*10+(s[i]-48);
        }else if(s[i]=='*'||s[i]=='/'||s[i]=='+'||s[i]=='-'){
        	b=pop(OPND); //扫描到操作符就 从栈中弹出两个操作数进行运算
            a=pop(OPND);
            theta=s[i];
            push(OPND,operate(a,theta,b));
		}else if(s[i-1]>48&&s[i-1]<58&&s[i]==32){ //扫描的字符为空格，并且前一字符为数字，数字压栈
			push(OPND,c);
			c=0;
		}
		i++; 
	}
	return getTop(OPND);
}
int main(){
	cout<<"请输入后缀表达式，以$符号结束：";
	getline(cin,s); 
	cout<<"表达式结果：";
	cout<<calculation(s)<<endl;
    return 0;
}

