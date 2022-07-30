//Q.n.1:Write a program to overload minus operator.
#include<iostream>
using namespace std;
class minusOperator{
	int a,b;
	public:
	minusOperator(int x, int y){
		a=x;
		b=y;
	}
	void operator -(){
		a=-a;
		b=-b;
	}
	void display(){
		cout<<"a="<<a<<" b="<<b<<endl;
	}
};
int main(){
	minusOperator O(12,13);
	-O;
	O.display();
	return 0;
}
