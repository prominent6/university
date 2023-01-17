#include <iostream>
using namespace std;
const float PI=3.141593;
const float FENCE_PRICE=35;
const float CONCRETE_PRICE=20;

class Circle{
	public:
		Circle(float r):radius(r){
		}
		float circumference(); //计算圆的周长
		float area();  //计算圆的面积
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
	Circle pool(radius); //游泳池边界对象
	Circle poolRim(radius+3); //栅栏对象
	
	float fenceCost=poolRim.circumference()* FENCE_PRICE;
	float concreteCost=(poolRim.area()-pool.area())*CONCRETE_PRICE;
	cout<<fenceCost<<" "<<concreteCost<<endl;
	return 0;
}
