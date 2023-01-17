#include <iostream>
using namespace std;
struct Student{
	int id;
	float gpa;
}; 

template<class T>  //类模板:实现对任意类型数据进行存取 
class Store{
	private:
		T item;
		bool haveValue;
	public:
		Store();
		T &getElem();
		void putElem(const T &x);
};

//以下实现各成员函数
template<class T>
Store<T>::Store():haveValue(false){
} 
template<class T>
T &Store<T>::getElem(){
	if(!haveValue){
		cout<<"No item present!"<<endl;
		exit(1); 
	}
	return item;
}

template<class T>
void Store<T>::putElem(const T &x){
	haveValue=true;
	item=x;
} 
int main(){
	Store<int>s1,s2;
	s1.putElem(3);
	s2.putElem(-7);
	cout<<s1.getElem()<<" "<<s2.getElem()<<endl;
	
	Student g={1000,23};
	Store<Student>s3;
	s3.putElem(g);
	cout<<"id:"<<s3.getElem().id<<endl;
	
	Store<double> d;
	cout<<d.getElem()<<endl; 
	return 0;
}
