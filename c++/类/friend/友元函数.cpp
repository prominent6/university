//������X,Y,Z,
//����h(X*),���㣺��X��˽�г�Աi��
//Y�ĳ�Ա����g(X*)��X����Ԫ������ʵ�ֶ�X�ĳ�Աi��1��
//��Z����X����Ԫ�࣬���Ա����f(X*)ʵ�ֶ�X�ĳ�Աi��5��
//����h(X*)��X����Ԫ������ʵ�ֶ�X�ĳ�Աi��10
#include <iostream>
using namespace std;

class X;  //Ҫ����Y Z ��ʹ����X ʹ�����ǰ����������
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
	friend class Z;   //��Z��X����Ԫ��
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
