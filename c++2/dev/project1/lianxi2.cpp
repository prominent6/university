#include <iostream>
#include <Windows.h>
#include <string>

using namespace std;

int main(void){
    string myGirl("С��");
    string yourGirl;
    
    cout << "��ϲ����Ů����" << myGirl <<endl;
	cout <<"��ϲ����Ů����˭����" ;
	cin >> yourGirl;
	
	if(myGirl==yourGirl){
		cout << "���Ƕ�ϲ��" <<myGirl <<" ��Ҫ�������" <<endl;
	} else{ 
	    cout<< " ף���Ҹ�" <<endl; 
	}

    
        system("pause");
        return 0;
   
}
