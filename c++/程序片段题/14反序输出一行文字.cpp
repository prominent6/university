#include <iostream>
#include <string>
using namespace std;
int main()
{ 
	int i;
	string s;    
	//将该行输入保存到字符串s中
	cin>>s;
	i=s.length();
	while(i){
		cout<<s[--i];    
	}
	cout<<endl;
	return 0;
}
