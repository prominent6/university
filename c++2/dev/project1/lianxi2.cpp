#include <iostream>
#include <Windows.h>
#include <string>

using namespace std;

int main(void){
    string myGirl("小苏");
    string yourGirl;
    
    cout << "我喜欢的女孩是" << myGirl <<endl;
	cout <<"你喜欢的女孩是谁啊？" ;
	cin >> yourGirl;
	
	if(myGirl==yourGirl){
		cout << "我们都喜欢" <<myGirl <<" 我要跟你决斗" <<endl;
	} else{ 
	    cout<< " 祝你幸福" <<endl; 
	}

    
        system("pause");
        return 0;
   
}
