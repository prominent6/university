//ʵ��һ����ΪSimpleCircle�ļ�Բ��
//�����ݳ�Աint *itsRadiusΪһ��ָ����뾶ֵ��ָ�룬�����뾶ֵ
//��ƶ����ݳ�Ա�ĸ��ֲ������������
#include  <iostream>
using  namespace  std;
const  float  pi=3.14;
class  SimpleCircle
{
	public:
		SimpleCircle(){
			cout<<"Con. SimpleCircle"<<endl;
		}
		~SimpleCircle(){
			cout<<"Des. SimpleCircle"<<endl;
		}
        void  setRadius(float  r)
        {
                *itsRadius=r;
        }
        float  getRadius()
        {
                return  *itsRadius;
        }
        float  getArea()
        {
                return  (*itsRadius)*(*itsRadius)*pi;
        }
        
    private:
    	float  *itsRadius;
};
int  main()
{
        SimpleCircle  c;
        c.setRadius(10);
        cout<<"Area:"<<c.getArea()<<endl;
}

