//N��ʾ����һ���ж��ٸ�Ƥ����M��ʾ�ǼǴ�������֤������Ŀ��K��ʾÿ��Ҫ�������Ƥ������Ŀ
#include <iostream>
#include <string>
#include <vector>
using namespace std;
class P{
	public:
		string id;
};
int main(){
	vector<string> vct;
	int n,m,k;
	cin>>n>>m>>k;
	//��һ�����С��Ҫ����������ܲ��������е�Ƥ����
	if(n%k) cout<<n/k+1<<endl;
	else cout<<n/k<<endl;
	
	P *p=new P[n];
	for(int i=0;i<n;i++) cin>>p[i].id;
	for(int i=0;i<k;i++){
		int flag=1;
		string s;
		cin>>s;
		for(int j=0;j<n;j++){
			if(s==p[j].id){
				flag=0;
				break; 
			}
		}
		if(flag){
			m--;
			vct.push_back(s);
		};
	}
	//�ڶ������ʣ��δ��������д�������֤�Ÿ���
	cout<<m<<endl;
	
	//�����а�������˳������д�������֤�ţ��Կո�ָ�������λ�����ж���ո� ���û�в�����д�������֤�ţ������All Passed!
	if(vct.size()>0){
  		for(unsigned int i=0;i<vct.size();i++){
   			cout<<vct[i];
   			//����λ�����ж���ո�
   			if(i<vct.size()-1) cout<<" ";
		}
	}else cout<<"All Passed!";
	return 0;
} 
