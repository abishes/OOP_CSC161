//Q.no. 3: Solve Q. No. 2 by defining at least one constructor in each class
#include <iostream>
using namespace std;
class student{
	int roll;
	public:
	student(){}
	student(int x):roll(x){}
	int getRoll(){
		return roll;
	}
};

class test: virtual public student{
	float marks;
	public:
	test(){}
	test(float y):marks(y){}
	float getMarks(){
		return marks;
	}
};

class sports: virtual public student{
	int noSports;
	public:
	sports(){}
	sports(int x):noSports(x){}
	float getNoSports(){
		return noSports;
	}
};

class result: virtual public student, public test, public sports{
	public:
	result(){}
	result(int r, float m, int noSports):student(r),test(m),sports(noSports){}
	void display(){
		cout<<"Student Id: "<<getRoll()
			<<"\nMarks: "<<getMarks()
			<<"\nNo. of sports participiated in: "<<getNoSports()<<endl;
	}
};

int main(){
	result R;
	R = result(10, 400, 3);
	R.display();
	return 0;
}

