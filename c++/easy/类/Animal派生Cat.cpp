#include <iostream>
#include <string>
using namespace std;
class Animal{
	public:
		void speak(){
			cout<<"animal language!"<<endl;
		}
}; 
class Cat:public Animal{
	private:
		string m_strName;
	public:
		Cat(string m):m_strName(m){
		};
		void print_name(){
			cout<<"cat name: "<<m_strName<<endl;
		}
};
int main()
{
    Cat cat("Persian"); //�������������
    cat.print_name();    //���������ʹ�ñ����Ա����
    cat.speak();    //���������ʹ�û����Ա����
    return 0;
}

