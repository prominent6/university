//�Ӽ��������׺���ʽ/�沨�����ʽ ������������ո� ������ֻ��+-*/ 
//��ʵ�ֶ�λ�������� 
#include <iostream>
#include <string>
using namespace std;

string s;  //��׺���ʽ�ַ���
int OPND[100]; //������ջ
int topN=-1;

//ջ�Ļ�������
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
        	b=pop(OPND); //ɨ�赽�������� ��ջ�е���������������������
            a=pop(OPND);
            theta=s[i];
            push(OPND,operate(a,theta,b));
		}else if(s[i-1]>48&&s[i-1]<58&&s[i]==32){ //ɨ����ַ�Ϊ�ո񣬲���ǰһ�ַ�Ϊ���֣�����ѹջ
			push(OPND,c);
			c=0;
		}
		i++; 
	}
	return getTop(OPND);
}
int main(){
	cout<<"�������׺���ʽ����$���Ž�����";
	getline(cin,s); 
	cout<<"���ʽ�����";
	cout<<calculation(s)<<endl;
    return 0;
}

