#include <iostream>
#include <string>
using namespace std;
template<class T> T myMax(T a,T b);
template<class T> T myMax(T a,T b,T c);
//T�ǳ������ͣ�������int,double,char,string����ʵ��������������ģ��Ҳ���Խ������ء�
template<class T> T myMax(T a,T b){
	return a>b?a:b;
}
template<class T> T myMax(T a,T b,T c){
	T temp=(a>b?a:b);
	return temp>c?temp:c;
}
int main()
{
    int a, b, c;
    double s,t;
    string x,y;
    cin>>x>>y;        cout << myMax(x,y) << endl;
    cin>>a>>b>>c;     cout << myMax(a,b,c) << endl;
    cin>>s>> t;       cout << myMax(s,t) << endl;   
    cin>> a >> b;     cout << myMax(a,b) << endl;
    return 0;
}

