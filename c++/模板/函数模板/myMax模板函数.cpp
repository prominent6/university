#include <iostream>
using namespace std;

template <typename T>
T myMax(T a,T b){
	return a>b?a:b;
}

int main(){
	cout << myMax(3,2) << endl;
	cout << myMax(string("hello"),string("howdy")) << endl;
	cout << myMax(3.2,0.5) << endl;
	cout << myMax(true,false) << endl;
	return 0;
}

