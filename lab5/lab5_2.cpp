//Q.no. 2: Solve the following form of inheritance. [ use virtual base class]
#include <iostream>
using namespace std;
class student{
	int roll;
	public:
	void setRoll(int x){
		roll = x;
	}
	int getRoll(){
		return roll;
	}
};

class test: virtual public student{
	float marks;
	public:
	void setMarks(float y){
		marks = y;
	}
	float getMarks(){
		return marks;
	}
};

class sports: virtual public student{
	int noSports;
	public:
	void setNoSports(int x){
		noSports = x;
	}
	float getNoSports(){
		return noSports;
	}
};

class result: virtual public student, public test, public sports{
	public:
	void display(){
		cout<<"Student Id: "<<getRoll()
			<<"\nMarks: "<<getMarks()
			<<"\nNo. of sports participiated in: "<<getNoSports()<<endl;
	}
};

int main(){
	result R;
	R.setRoll(10);
	R.setMarks(400);
	R.setNoSports(3);
	R.display();
	return 0;
}
