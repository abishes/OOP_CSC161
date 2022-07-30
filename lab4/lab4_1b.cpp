//Write a program of single inheretance
//b) private derivation
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

class D: private B{
	int c;
public:
	void set_B(int x, int y){
		set(x,y);
	}
	void calculate(){
		c= get_a() * b;
	}
	void display(){
		cout<<"c = "<<c;
	}
		
};

int main(){
	D d;
	d.set_B(10, 20);
	d.calculate();
	d.display();
	return 0;
}
