 #include <iostream>
#include <Windows.h>
#include <string>

using namespace std;

int main(void){
    string book;

    cout << "请输入你喜欢阅读的书籍";
    getline(cin, book);

    if (book.empty()) {
        cout << "你什么也没说啊！" << endl;
    }
    else {
        cout << "太巧了！我也准备看" << book << "这些书" << endl;
    }
        system("pause");
        return 0;
   
}
