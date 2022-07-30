//Q.N 2a:Write a program to add two complex numbers by overloading binary operator(+)
#include<iostream>
using namespace std;
class cpxNum{
	int real, img;
	public:
	cpxNum(){}
	cpxNum(int x, int y){
		real=x;
		img=y;
	}
	cpxNum operator +(cpxNum& C){
		cpxNum temp;
		temp.real=real+C.real;
		temp.img=img+C.img;
		return temp;
	}
	void display(){
		cout<<"Complex number: "<<real<<"+"<<img<<"j";
	}
};
int main(){
	cpxNum C1(2,3), C2(1,1);
	C2=C1+C2;
	C2.display();
	return 0;
}
