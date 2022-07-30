//Q.N 8:Convert rectangle to polar type conversion using casting operator in the source class
#include<iostream>
#include<cmath>
class polar{
	float radius, thita;
	public:
	polar(){}
	polar(float a, float b){
		radius = a; thita=b;
	}
	void display(){
	std::cout<<"radius="<<radius<<" thita="<<thita;
	}
};
class rectangle{
	float x,y;
	public:
	rectangle(int a, int b){
		x=a; y=b;
	}
	operator polar(){
		return polar(sqrt(x*x+y*y), atan(y/x));
	}
};
int main(){
	polar p;
	rectangle r(5, 5);
	p=r;
	p.display();
}
