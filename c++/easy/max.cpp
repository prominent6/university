#include <iostream>
using namespace std; 
int main()
{
	int max( int a,int b,int c=0);
	int a,b,c;
	cin>>a>>b>>c;
	cout<<"max(a,b,c)="<<max(a,b,c)<<endl;
	cout<<"max(a,b)="<<max(a,b)<<endl;
	return 0;
}
int max( int a,int b,int c=0){
	if(c==0) return a>b?a:b;
	else {
		int maxn1=(a>b?a:b);
		return (maxn1>c?maxn1:c);
	}
}

