//Q.no 2:solve the following problem of multilevel inheritance

#include <iostream>
using namespace std;
class student{
	protected:
	int roll_no;
};
class test: protected student{
	float sub1, sub2;
	public:
	void set_marks(float x, float y){
		sub1 = x;
		sub2 = y;
	}
	void set_roll(int x){
		roll_no = x;
	}
	int get_roll(){
		return roll_no;
	}
	float get_sub1(){
		return sub1;
	}
	float get_sub2(){
		return sub2;
	}
};
class result: public test{
	float total;
	public:
	void compute(){
		total = get_sub1() + get_sub2(); 
	}
	void display(){
		cout<<"Student Roll no. : "<<get_roll()
			<<"\nTotal marks ="<<total;
	}
};
int main(){
	result R;
	R.set_roll(20);
	R.set_marks(75, 85);
	R.compute();
	R.display();
	return 0;
}

