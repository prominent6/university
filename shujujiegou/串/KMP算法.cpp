#include <iostream>
#include <string>
using namespace std;
//��jλ�ַ�ǰ��j-1λ�ַ���ɵ��Ӵ���ǰ��׺�غ��ַ���+1 
void build_next(string t,int next[]){ //����next���� 
	int prefix_len=1;
	int i=3; //��һ���ַ��ǰ��׺��Ϊ0 next[1]=0 
	next[2]=1; 
	while(i<t.size()){
		if(t[prefix_len]==t[i]){
			prefix_len++;
			next[i]=prefix_len;
			i++;
		}else{
			if(prefix_len==1){
				next[i]=1;
				i++;
			}else{
				prefix_len=next[prefix_len-1];
			}
		}
	}
} 

void get_nextval(string t,int nextval[]){
	int i=1,j=0;
	nextval[1]=0;
	while(i<t.size()){
		if(j==0||t[i]==t[j]){
			++i;
			++j;
			if(t[i]!=t[j]) nextval[i]=j;
			else nextval[i]=nextval[j];
		}else j=nextval[j];
	}
}

int main(void){
	string s="abaabcac";
	int next[8]={0};
	build_next(s,next);
	for(int i=1;i<=8;i++){
		cout<<next[i]<<" ";
	}
	return 0;
}
