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

    cout << "������뾶";
    cin >> r;

    len = 2 * 3.14 * r;
    s = 3.14 * r * r;

    cout.precision(2);
    cout.flags(cout.fixed);

    cout << "��Բ���ܳ�Ϊ��" << len<<endl;
    cout << "��Բ�����Ϊ��" << s<<endl;*/



   /* string university;
    string profession;

    cout << "�����ĸ�ѧУ�ģ�ѧʲôרҵ�ģ�" << endl;
    cin >> university >> profession;

    cout << "���ѧУ�ǣ�" << university << endl;
    cout << "���רҵ�ǣ�" << profession << endl;*/




   // //�����������ַ�������������ĸ�����ȷ��
   //  
   // string food;
   // int count=0;  //Ҫ�ǵó�ʼ��

   // cout << "������ϲ���Ե�ʳ��" << endl;

   // //��Ҫ����ѭ�����
   // //ʹ��cin>>����ʱ����������ļ���������Ctrl+z�����ͷ���0��ֹͣ��
   // while (cin>>food) {
   //     count = count + 1;
   //     cout << "��ϲ���ĵ�" << count << "����ʳ�ǣ�" <<food << endl;
   //     cout << "�㻹ϲ����ʲô��" << endl;
   // }

   //// cout << "��ϲ����ʳ���У�" << count << "��" << endl;
   // cout << "��һ��ϲ��" << count << "��ʳ��";



#include <iostream>
#include <Windows.h>
#include <string>

using namespace std;

int main(void){
    string book;

    cout << "��������ϲ���Ķ����鼮";
    getline(cin, book);

    if (book. empty()) {
        cout << "��ʲôҲû˵����" << endl;
    }
    else {
        cout << "̫���ˣ���Ҳ׼����" << book << "��Щ��" << endl;
    }
        system("pause");
        return 0;
   
}