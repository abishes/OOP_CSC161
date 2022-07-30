//Q.no 5: Write a program to show the concept of pure virtual function.
#include <iostream>
using namespace std;
class base{
	public:
	virtual void display()=0;
};
class derived:public base{
	public:
	void display(){
		cout<<"Display: Derived Class\n";
	}
};
int main(){
	derived d;
	base* bptr;
	bptr = &d;
	bptr->display();
	return 0;
}

