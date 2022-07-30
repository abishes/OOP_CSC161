//Q.N 2b:Write a program to overload (=) operator
#include<iostream>
using namespace std;
class equalOperator{
	int a;
	public:
	equalOperator(){}
	equalOperator(int x){
		a=x;
	}
	void operator =(equalOperator E){
		a=E.a;
	}
	void display(){
		cout<<"a="<<a;
	}
};
int main(){
	equalOperator E1(25), E2;
	E2=E1;
	E2.display();
	return 0;
}
