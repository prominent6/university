#include <iostream>
using namespace std;
class ArrayIndexOutOfBoundsException{  // �쳣��
public:
    int index;
    ArrayIndexOutOfBoundsException(int k){
        index = k;
    }
};
class Array{
private:
    int *data;
    int size;
    static const int dSize = 10;   // ����Ĭ�ϴ�С
public:
    Array( ){  // �޲ι���
        size = dSize;
        data = new int[size]( );
    }
    Array(int ss){
        size=ss;
        data = new int[size]( );
    }
    Array(const Array &a){
        size=a.size;
        data = new int[size]( );
        for(int i=0;i<size;i++) data[i]=a.data[i];
    }         
    Array& operator=(const Array &a){ // ��������
    //�ı������С 
    	if(a.size!=size){
    		delete []data;  //��ʱ���� 
    		size=a.size;
			data=new int[size](); 
		}
		for(int i=0;i<size;i++){
			data[i]=a.data[i];
		}
		return *this; 
	}  
	~Array(){
		delete []data;
	}
    int& operator [] (int k){     // ����� [ ] ���أ��Է��������ʹ��
        if(k<0 || k>=size) throw ArrayIndexOutOfBoundsException(k);
        return data[k];
    }
    friend ostream& operator << (ostream& o, const Array& a);   // ����� << ���أ��Է������
};
ostream& operator << (ostream& o, const Array& a){
    o << '[' ;
    for(int i=0; i<a.size-1; i++)
        o << a.data[i] << ',' ;
    o << a.data[a.size-1] << ']';
    return o;
}
// ע�⣺ʵ�ʲ��Գ����У��ڴ˴�֮ǰ�Ĵ�������������ͬ
// ע�⣺ʵ�ʲ��Գ����У��ڴ˴�֮��Ĵ��루��main�����������������в�ͬ
int main(){
    int n, k;
    cin >> n >> k;
    Array a(n);  // �������飬��СΪ n
    for(int i=0; i<n; i++) a[i] = i;
    Array b = a;  // ������������
    b[n/2] = k;
    cout << a << endl;
    cout << b << endl;
    Array c;  // �������飬Ĭ�ϴ�С
    c = a; // ��������
    c[n/2] = k;
    cout << a << endl;
    cout << c << endl;
    a = a;
    a[n/2] = 2223;
    cout << a << endl;
    return 0;
}

