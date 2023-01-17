#include <iostream> 
using namespace std; 
int fun( ) { 
	cout << "f" ; 
	return 1; 
} 
int main() { 
	int i = 1; // 
	cout << i++ << i++ << i++ << endl; 
	cout << "m" << fun() << fun() << fun() << endl; 
	return 1; 
} 
