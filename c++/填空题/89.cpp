#include <iostream>
using namespace std;
class A{
private:
	int m;
public:
	A():m(0){cout<<"默认构造函数"<<endl;}
	A(int n):m(n){cout<<"重载构造函数（带参数）"<<endl;}
	~A(){cout<<"析构函数"<<endl;}
	A(const A &b){
		m=b.m; 
		cout<<"拷贝构造函数"<<endl;
	}
	A &operator=(const A &b){
		cout<<"operator=重载"<<endl;
		return *this; 
	}
};
int main(){
	A a(2),b(a),c;
	c=a;
	A d=a;
	return 0;
}
