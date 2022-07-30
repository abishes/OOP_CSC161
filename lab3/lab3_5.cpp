//Q.N 5:Convert rectangle to polar by class type to class type conversion using constructor in the
//destination class
#include<iostream>
#include<cmath>
using namespace std;
class rectangle{
	float x,y;
	public:
	rectangle(int a, int b){
		x=a;y=b;
	}
	float getX(){return x;}
	float getY(){return y;}
};
class polar{
	float radius, thita;
	public:
	polar(rectangle R){
		radius=sqrt(R.getX()*R.getX() + R.getY()*R.getY());
		thita=atan(R.getY()/R.getX());
	}
	void display(){
		cout<<"Radius="<<radius<<" Thita="<<thita;
	}
};
int main(){
	rectangle R(5, 5);
	polar P=R;
	P.display();
}
