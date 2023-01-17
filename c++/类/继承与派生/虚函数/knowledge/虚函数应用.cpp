#include <iostream>
using namespace std;
class CMyClassA {
    int val;
public:
    CMyClassA(int);
    void virtual print();
};
CMyClassA::CMyClassA(int arg) {
    val = arg;
    printf("A:%d\n", val);
}

void CMyClassA::print() {
    printf("%d\n", val);
    return;
}

class CMyClassB:public CMyClassA{
	private:
		int v;
	public:
		CMyClassB(int m):CMyClassA(3*m){
			v=m;
			cout<<"B:"<<v<<endl;
		}
		void print(){
			cout<<v<<endl;
		}
};

int main(int argc, char** argv) {
    CMyClassA a(3), *ptr;
    CMyClassB b(5);
    ptr = &a;
    ptr->print();
    a = b;
    a.print();
    ptr = &b;
    ptr->print();
    return 0;
}


//A:3
//A:15
//B:5
//3
//15
//5

