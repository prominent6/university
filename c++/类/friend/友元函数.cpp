//定义类X,Y,Z,
//函数h(X*),满足：类X有私有成员i，
//Y的成员函数g(X*)是X的友元函数，实现对X的成员i加1；
//类Z是类X的友元类，其成员函数f(X*)实现对X的成员i加5；
//函数h(X*)是X的友元函数，实现对X的成员i加10
#include <iostream>
using namespace std;

class X;  //要在类Y Z 中使用类X 使用类的前向引用声明
class Y {
public:
	void g(X& x); //
};
class Z {
public:
	void f(X& x); //
};
class X {
public:
	X(int i) :i(i) {
	}
	friend void Y::g(X& x);  //
	friend class Z;   //类Z是X的友元类
	friend void h(X& x); //
	void print() {
		cout << i;
	}
private:
	int i;
};

void Y::g(X& x) {
	x.i = x.i+1;
};
void Z::f(X& x) {
	x.i = x.i+5;
};
void h(X& x) {
	x.i = x.i+10;
}
int main(void) {
	int a;
	cin >> a;
	X x(a);
	Y y;
	Z z;
	y.g(x);
	z.f(x);
	h(x);
	x.print();
}
