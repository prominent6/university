#include <iostream>
#include <string>
using namespace std;
//�������� 
void reverse_string(string &s){
	string c=s;
	int count=s.size()-1;
	for(int i=0;i<s.size();i++){
		s[i]=c[count];
		count--;
	}
}
int main(int argc, char const *argv[])
{
    string str;
    getline(cin, str);        //�����ַ���
    reverse_string(str);     //�����ַ���str
    cout << str << endl;    //����������ַ���
    return 0;
}

