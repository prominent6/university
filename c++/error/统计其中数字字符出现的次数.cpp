#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <cctype>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;
bool is_num(char c){
	if(c>='0'&&c<='9') return true;
	else return  false;
} 
class Solution{
	public:
		int count_digits(string s){
			const char * p = s.c_str();
			int n=count(p,p+s.size(),is_num);
//			int n=0;
//			for(unsigned int i=0;i<s.size();i++){
//				if(s[i]>='0'&&s[i]<='9') n++;
//			} 
			return n;
		}
	
}; 
int main()
{
    int t;
    cin >> t;
    getchar();
    while (t--)
    {
        string str;
        Solution obj;
        getline(cin,str);
        int digits = obj.count_digits(str);
        cout << digits << endl;
    }
 
    return 0;
}


