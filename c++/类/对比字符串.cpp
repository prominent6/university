//N表示城中一共有多少个皮卡丘，M表示登记错误的身份证号码数目，K表示每天要来查验的皮卡丘数目
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
	//第一行输出小智要花多少天才能查验完所有的皮卡丘
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
	//第二行输出剩余未查验出的有错误的身份证号个数
	cout<<m<<endl;
	
	//第三行按照输入顺序输出有错误的身份证号，以空格分隔，行首位不得有多余空格。 如果没有查验出有错误的身份证号，则输出All Passed!
	if(vct.size()>0){
  		for(unsigned int i=0;i<vct.size();i++){
   			cout<<vct[i];
   			//行首位不得有多余空格
   			if(i<vct.size()-1) cout<<" ";
		}
	}else cout<<"All Passed!";
	return 0;
} 
