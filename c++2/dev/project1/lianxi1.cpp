 #include <iostream>
#include <Windows.h>
#include <string>

using namespace std;

int main(void){
    string book;

    cout << "��������ϲ���Ķ����鼮";
    getline(cin, book);

    if (book.empty()) {
        cout << "��ʲôҲû˵����" << endl;
    }
    else {
        cout << "̫���ˣ���Ҳ׼����" << book << "��Щ��" << endl;
    }
        system("pause");
        return 0;
   
}
