#include <iostream>
#include <Windows.h>

using namespace std;

int main(void) {
	//char name;
	//int pwd;    //���ñ���

	//std::cout << "�������˺�:";
	//std::cin >> name;      //���û������˺ţ������浽name��

	//std::cout << "����������";
	//std::cin >> pwd;
    
	




	//double value = 12.3456789;  // double ��Ч����Ϊ16λ
	//cout << value << endl;   // coutĬ����Ч����Ϊ6λ�����Ϊ12.3457

	////�����޸��������,����λ��Ч����
	//cout.precision(4); 
	//cout << value << endl;  // 12.35

	////���Խ����ȸ�Ϊȷ��С�����λ��
 //   	cout.flags(cout.fixed);    // ���㷨
	//cout << value << endl;  //12.3457

	////ȡ�����㷨
	//cout.unsetf(cout.fixed);
	//cout << value << endl; //12.35





	/*char girlType;
	int salary;
	float height;

	cout << "�����������������" << endl;
	cout << "A.�ͻ���" << endl;
	cout << "B.������" << endl;
	cout << "C.������" << endl; 
	cout << "D.�˶���" << endl;
	cin >> girlType;

	cout << "��������������루Ԫ��" << endl;
	cin >> salary;

	cout << "�����������ߣ��ף�" << endl;
	cin >> height;

	cout << "����������ǣ�" << girlType << endl;
	cout << "����������ǣ�" << salary << "Ԫ" << endl;
	cout << "�������ǣ�" << height << "��" << endl;*/




	int a = 0;
	int b = 0;
	int c = 0;

	cout << "������a" << endl;
	cin >> a;

	if (cin.fail()) {
		cout << "����ʧ�ܣ�Ӧ������һ������" << endl;   //��ʾӦ����������
		cin.clear();  //���cin�Ĵ����־
		cin.sync();  // ������뻺����
	}

	cout << "������b" << endl;
	cin >> b;

	if (cin.fail()) {
		cout << "����ʧ�ܣ�Ӧ������һ������" << endl;  //��ʾӦ����������
		cin.clear();  //���cin�Ĵ����־
		cin.sync();  // ������뻺����
	}
	
	cout << "������c" << endl;
	cin >> c;

	if (cin.fail()) {
		cout << "����ʧ�ܣ�Ӧ������һ������" << endl;  //��ʾӦ����������
		cin.clear();  //���cin�Ĵ����־
		cin.sync();  // ������뻺����
	}

	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	cout << "c=" << c << endl;

	system("pause");
	return 0;
}