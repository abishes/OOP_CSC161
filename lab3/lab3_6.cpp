//Q.N 6: Convert polar to rectangle type conversion using casting operator in the destination class
#include<iostream>
#include<cmath>
#define PI 3.14159
class rectangle{
	float x,y;
	public:
	rectangle(){}
	rectangle(float a, float b){
		x=a;y=b;
	}
	void display(){
		std::cout<<"X="<<x<<" Y="<<y<<"\n";
	}
};
class polar{
	float radius, thita;
	public:
	polar(float a, float b){
		radius=a; thita=b;
	}
	operator rectangle(){
		return rectangle(radius*sin(thita), radius*cos(thita));
	}
};
int main(){
	rectangle R;
	polar P(5,20*PI/180);
	R=P;
	R.display();
}
