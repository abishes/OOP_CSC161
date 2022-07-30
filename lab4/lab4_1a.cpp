//Write a program of single inheretance
//a) public derivation
#include <iostream>
using namespace std;
class B{
	int a;
public:
	int b;
	void set(int x, int y){
		a = x;
		b = y;
	}
	int get_a(){
		return a;
	}
};

class D: public B{
	int c;
public:
	void calculate(){
		c= get_a()*b;
	}
	void display(){
		cout<<"c = "<<c;
	}
		
};

int main(){
	D d;
	d.set(10,20);
	d.calculate();
	d.display();
	return 0;
}
