//��дһ�����鶯����Mammal�����ɴ�����������Dog��
//���߶�����speak()��Ա�������ú����ڻ����б�����Ϊ�麯���� 
//����һ��Dog��Ķ���ͨ���˶������speak������
//����һ��Mammal���ָ��ָ��Dog��Ķ���ͨ��ָ�����speak����

#include <iostream>
using namespace std;
class Mammal{
	public:
		virtual void speak(){
		};
};
class Dog:public Mammal{
	public:
		void speak(){
			cout<<"Dog is speaking!"<<endl;
		};
};
int main()
{
    Dog dog;
    Mammal *p;
    dog.speak();
    p=&dog;
    p->speak();
    return 0;
}


