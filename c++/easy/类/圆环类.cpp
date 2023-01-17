#include <iostream>
using namespace std;
const float PI=3.141593;
const float FENCE_PRICE=35;
const float CONCRETE_PRICE=20;

class Circle{
	public:
		Circle(float r):radius(r){
		}
		float circumference(); //����Բ���ܳ�
		float area();  //����Բ�����
	private:
		float radius; 
}; 

float Circle::circumference(){
	return 2*PI*radius;
}
float Circle::area(){
	return PI*radius*radius;
}
int main(){
	float radius;
	cin>>radius;
	Circle pool(radius); //��Ӿ�ر߽����
	Circle poolRim(radius+3); //դ������
	
	float fenceCost=poolRim.circumference()* FENCE_PRICE;
	float concreteCost=(poolRim.area()-pool.area())*CONCRETE_PRICE;
	cout<<fenceCost<<" "<<concreteCost<<endl;
	return 0;
}
