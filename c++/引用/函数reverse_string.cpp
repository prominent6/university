#include <iostream>
#include <string>
using namespace std;
//´«ÈëÒıÓÃ 
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
    getline(cin, str);        //ÊäÈë×Ö·û´®
    reverse_string(str);     //ÄæĞò×Ö·û´®str
    cout << str << endl;    //Êä³öÄæĞòºóµÄ×Ö·û´®
    return 0;
}

