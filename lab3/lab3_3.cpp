//Q.N 3:Write a program showing basic to class type conversion
#include<iostream>
using namespace std;
class basicToClass{
	int a;
	public:
	basicToClass(){}
	basicToClass(int x){
		a=x;
	}
	void display(){
		cout<<"Class member 'a' value ="<<a;
	}
};
int main(){
	int a =20;
	basicToClass X;
	X=a;
	X.display();
	return 0;
}
