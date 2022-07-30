//Q.N 7:Convert polar to rectangle by class type to class type conversion using constructor in the
//destination
#include<iostream>
#include<cmath>
#define PI 3.14159
class polar{
	float radius, thita;
	public:
	polar(){}
	polar(float a, float b){
		radius=a;thita=b;
	}
	float getThita(){return thita;}
	float getRadius(){return radius;}
};
class rectangle{
	float x,y;
	public:
	rectangle(){}
	rectangle(polar P){
		x=P.getRadius()*sin(P.getThita());
		y=P.getRadius()*cos(P.getThita());
	}
	void display(){
		std::cout<<"X="<<x<<" Y="<<y;
	}
};
int main(){
	polar p(5,20*PI/180);
	rectangle r=p;
	r.display();
}
