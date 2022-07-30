//Q.no 8: Write a program of virtual destructor
#include <iostream>
using namespace std;
class base{
	public:
	base(){
		cout<<"Base constructor call\n";
	}
	virtual ~base(){
		cout<<"Base destructor call\n";
	}
};
class derived: public base{
	public:
	derived(){
		cout<<"Derived constructor call\n";
	}
	~derived(){
		cout<<"Derived destructor call\n";
	}
	
};
int main(){
	base* bptr= new derived();
	delete bptr;
	return 0;
}
