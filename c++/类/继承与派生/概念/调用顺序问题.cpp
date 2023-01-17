#include <iostream>
using namespace std;
class B1
{
public:
    B1(int i)
    {
        b1 = i;
        cout<<"Constructing B1."<<b1<<endl; 
	} //2
	~B1(){
		cout<<"Destructing B1."<<b1<<endl;
	} 
    void print() { cout<<b1<<endl; } //5
private:
    int b1;
};

class B2
{
public:
    B2(int i)
    {
        b2 = i;
        cout<<"Constructing B2."<<b2<<endl; 
	} //1
	~B2(){
		cout<<"Destructing B2."<<b2<<endl;
	} 
    void print() { cout<<b2<<endl;} //6 
private:
    int b2;
};

class B3
{
public:
    B3(int i)
    {
        b3 = i;
        cout<<"Constructing B3."<<b3<<endl; 
	} //3
	~B3(){
		cout<<"Destructing B3."<<b3<<endl;
	} 
    int getb3() { return b3; }
private:
    int b3;
};

class A : public B2, public B1   //按这个顺序调用构造函数 
{
public:
    A(int i, int j, int k, int l):B1(i), B2(j), bb(k)
    {
        a = l;
        cout<<"Constructing A."<<a<<endl; 
	} //4
	~A(){
		cout<<"Destructing A."<<a<<endl;
	} 
    void print()
    {
        B1::print(); 
        B2::print();
        cout<<a<<endl; //7
	}
private:
    int a;
    B3 bb;
};

int main()
{
    A aa(1, 2, 3, 4);
    aa.print();
    return 0;
}

//Constructing B2.2
//Constructing B1.1
//Constructing B3.3
//Constructing A.4
//1
//2
//4
