//Q.no. 1:Write a program to solve the concept of virtual function
#include <iostream>
using namespace std;
class base{
	public:
	void display1(){
		cout<<"display1 from base\n";
	}
	virtual void display2(){
		cout<<"display2 from base\n";
	}
};

class derived:public base{
	public:
	void display1(){
		cout<<"display1 from derived\n";
	}
	void display2(){
		cout<<"display2 from derived\n";
	}
};

int main(){
	base B;
	base *b = &B;
	b->display1();
	b->display2();
	derived D;
	b = &D;
	b->display1();
	b->display2();
	return 0;
}
