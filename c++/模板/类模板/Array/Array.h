#include <cassert>
template<class T>
class Array{
	private:
		T* list; //T类型指针，用于存放动态分配的数组内存首地址
		int size; 
	public:
		Array(int sz=50);
		Array(const Array<T>&a); //复制构造函数
		~Array();
		Array<T>& operator=(const Array<T>& rhs); //重载"="使数组对象可以整体赋值	 
		T & operator [] (int i); //重载"[]"使Array对象可以起到c++普通数组的作用
		const T & operator [] (int i) const; //"[]"运算符针对const的重载 
		operator T* ();  //重载*运算符 
		operator const T*() const;
		int getSize() const;
		void resize(int sz); 
};

//构造函数 
template<class T>
Array<T>::Array(int sz){
	assert(sz>=0);
	size=sz;
	list=new T [size]; 
}
//析构函数
template<class T>
Array<T>::~Array(){
	delete [] list; 
} 
//复制构造函数 
template<class T>
Array<T>::Array(const Array<T>&a){
	size=a.size;
	list=new T[size];
	for(int i=0;i<size;i++) list[i]=a.list[i]; 
}
//重载"=" 
template<class T>
Array<T>&Array<T>::operator=(const Array<T>& rhs){
	if(&rhs!=this){ 
		//如果本对象数组大小与rhs不同，则删除数组原有内存，然后重新分配
		if(size!=rhs.size){
			delete []list;
			size=rhs.size;
			list=new T[size];
		}
		//从对象rhs赋值数组元素到本对象
		for(int i=0;i<size;i++){
			list[i]=rhs.list[i];
		} 
	}
	return *this;
}
//重载下标运算符，并且具有越界检查功能 
template<class T>
T &Array<T>::operator[] (int n){
	assert(n>=0&&n<size);
	return list[n];  
}

template<class T>
const T &Array<T>::operator[] (int n) const{
	assert(n>=0&&n<size);
	return list[n];  
}

//重载*运算符，将Array类的对象名转换为T类型的指针 
//指向当前对象中的私有数组
//因而可以像使用普通数组首地址一样使用Array类的对象名
template<class T>
Array<T>::operator T*(){
	return list;
} 

template<class T>
Array<T>::operator const T*() const{
	return list;
} 

template<class T>
int Array<T>::getSize() const{
	return size;
}

template<class T>
void Array<T>::resize(int sz){
	assert(sz>>0);
	if(sz==size) return;
	T *newList=new T[sz];
	int n=(sz<size)?sz:size;
	for(int i=0;i<n;i++) newList[i]=list[i];
	delete []list;
	list=newList;
	size=sz; 
}
