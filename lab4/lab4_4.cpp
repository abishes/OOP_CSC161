//Q.no 4:solve the following form of hybrid inheritance
#include <iostream>
using namespace std;
class student{
	int roll;
	public:
	void setRoll(int x){
		roll =x;
	}
	int getRoll(){
		return roll;
	}
};

class test: public student{
	float testMarks;
	public:
	void setTest(float test){
		testMarks = test;
	}
	float getTest(){
		return testMarks;
	}
};

class sports{
	int sport_num;
	public:
	void setSports(int x){
		sport_num = x;
	}
	int getSports(){
		return sport_num;
	}
};

class result:public test, public sports{
	public:
	void display(){
		cout<<"Student of ID "<<getRoll()<<" has secured "<<getTest()
		<<" in test and is participated in "<<getSports()<<" sports\n";
	}
};
int main(){
	result R;
	R.setRoll(10);
	R.setTest(85);
	R.setSports(4);
	R.display();
	return 0;	
}
