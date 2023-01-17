#include <iostream>
#include <string>
using namespace std;

class Animal{
	private:
		int  m_nWeightBase; //����
	protected:
		int  m_nAgeBase; //����
	public:
		void set_weight(int w){
			m_nWeightBase =w; 
		}
		void set_age(int a){
			m_nAgeBase=a;
		}
		int get_weight(){
			return m_nWeightBase ;
		}
};
class Cat:public Animal{
	private:
		string m_strName;
	public:
		Cat(string s):m_strName(s){
		};
		void print_age(){
			cout<<m_strName<<", age = "<<m_nAgeBase<<endl;
		}
}; 
int main()
{
    Cat cat("Persian");   //�������������cat
    cat.set_age(5);       //�����������ôӻ���̳еĹ��г�Ա����
    cat.set_weight(6);    //�����������ôӻ���̳еĹ��г�Ա����
    cat.print_age();      //�������������Լ��Ĺ��к���
    cout << "cat weight = " << cat.get_weight() << endl;
    return 0;
}

