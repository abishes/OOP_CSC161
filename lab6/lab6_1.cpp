//1. Write a program to show addition, subtraction, division, multiplication operations making four different functions.
//Test your program by using the concept of template handling.
#include <iostream>
using namespace std;
template <typename T>
class calc{
	T a;
	public:
	void add(T x, T y){
		a = x + y;
	}
	void sub(T x, T y){
		a = x - y;
	}
	void div(T x, T y){
		a = x / y;
	}
	void mul(T x, T y){
		a = x * y;
	}
	void display(){
		cout<<"The result is "<< a <<endl;
	}
};
int main(){
	calc <int> C1;
	calc <float> C2;
	C1.add(7, 5);C1.display();
	C1.sub(7, 5);C1.display();
	C1.div(7, 5);C1.display();
	C1.mul(7, 5);C1.display();
	C2.add(7.5, 5.5);C2.display();
	C2.sub(7.5, 5.5);C2.display();
	C2.div(7.5, 5.5);C2.display();
	C2.mul(7.5, 5.5);C2.display();
	return 0;
}
