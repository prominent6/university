/*#include <iostream>
#include <Windows.h>
#include <string>

using namespace std;

int main(void) {
  */  
    /*
    float r;
    float len;
    float s;

    cout << "请输入半径";
    cin >> r;

    len = 2 * 3.14 * r;
    s = 3.14 * r * r;

    cout.precision(2);
    cout.flags(cout.fixed);

    cout << "该圆的周长为；" << len<<endl;
    cout << "该圆的面积为：" << s<<endl;*/



   /* string university;
    string profession;

    cout << "你是哪个学校的？学什么专业的？" << endl;
    cin >> university >> profession;

    cout << "你的学校是：" << university << endl;
    cout << "你的专业是：" << profession << endl;*/




   // //连续输入多个字符串，而且输入的个数不确定
   //  
   // string food;
   // int count=0;  //要记得初始化

   // cout << "输入你喜欢吃的食物" << endl;

   // //需要输入循环语句
   // //使用cin>>输入时，如果遇到文件结束符（Ctrl+z），就返回0（停止）
   // while (cin>>food) {
   //     count = count + 1;
   //     cout << "你喜欢的第" << count << "种美食是：" <<food << endl;
   //     cout << "你还喜欢吃什么？" << endl;
   // }

   //// cout << "你喜欢的食物有：" << count << "种" << endl;
   // cout << "你一共喜欢" << count << "种食物";



#include <iostream>
#include <Windows.h>
#include <string>

using namespace std;

int main(void){
    string book;

    cout << "请输入你喜欢阅读的书籍";
    getline(cin, book);

    if (book. empty()) {
        cout << "你什么也没说啊！" << endl;
    }
    else {
        cout << "太巧了！我也准备看" << book << "这些书" << endl;
    }
        system("pause");
        return 0;
   
}