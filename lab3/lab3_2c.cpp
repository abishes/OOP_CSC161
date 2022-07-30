//Q.N 2c:Write a program to find largest of two numbers by overloading (>) operator
#include<iostream>
using namespace std;
class greaterThan{
	int a;
	public:
	greaterThan(int x){
		a=x;
	}
	void operator >(greaterThan& X){
		cout<<"Largest number is "<<((a>X.a) ? a:X.a);
	} 
};
int main(){
	greaterThan G1(20),G2(30);
	G1>G2;
	return 0;
}
