#include <cassert>
template<class T>
class Array{
	private:
		T* list; //T����ָ�룬���ڴ�Ŷ�̬����������ڴ��׵�ַ
		int size; 
	public:
		Array(int sz=50);
		Array(const Array<T>&a); //���ƹ��캯��
		~Array();
		Array<T>& operator=(const Array<T>& rhs); //����"="ʹ�������������帳ֵ	 
		T & operator [] (int i); //����"[]"ʹArray���������c++��ͨ���������
		const T & operator [] (int i) const; //"[]"��������const������ 
		operator T* ();  //����*����� 
		operator const T*() const;
		int getSize() const;
		void resize(int sz); 
};

//���캯�� 
template<class T>
Array<T>::Array(int sz){
	assert(sz>=0);
	size=sz;
	list=new T [size]; 
}
//��������
template<class T>
Array<T>::~Array(){
	delete [] list; 
} 
//���ƹ��캯�� 
template<class T>
Array<T>::Array(const Array<T>&a){
	size=a.size;
	list=new T[size];
	for(int i=0;i<size;i++) list[i]=a.list[i]; 
}
//����"=" 
template<class T>
Array<T>&Array<T>::operator=(const Array<T>& rhs){
	if(&rhs!=this){ 
		//��������������С��rhs��ͬ����ɾ������ԭ���ڴ棬Ȼ�����·���
		if(size!=rhs.size){
			delete []list;
			size=rhs.size;
			list=new T[size];
		}
		//�Ӷ���rhs��ֵ����Ԫ�ص�������
		for(int i=0;i<size;i++){
			list[i]=rhs.list[i];
		} 
	}
	return *this;
}
//�����±�����������Ҿ���Խ���鹦�� 
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

//����*���������Array��Ķ�����ת��ΪT���͵�ָ�� 
//ָ��ǰ�����е�˽������
//���������ʹ����ͨ�����׵�ַһ��ʹ��Array��Ķ�����
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
