#include <iostream>
using namespace std;
class Car{
	private:
		int m_nWheels;
	public:
		void disp_welcomemsg(){
			cout<<"Welcome to the car world!"<<endl;
		};
		int get_wheels(){
			return m_nWheels;
		}
		void set_wheels(int m){
			this->m_nWheels=m;
		}
}; 

int main()
{
    int n;
    cin >> n;
    Car myfstcar, myseccar;    //���������
    myfstcar.disp_welcomemsg();//���ʳ�Ա��������ʾ��ӭ��Ϣ
    myfstcar.set_wheels(n);    //���ʳ�Ա���������ó�������
    myseccar.set_wheels(n+4);  //���ʳ�Ա���������ó�������
    //���ʳ�Ա��������ʾ��������
    cout << "my first car wheels num = " << myfstcar.get_wheels() << endl;
    cout << "my second car wheels num = " << myseccar.get_wheels() << endl;

    return 0;
}

