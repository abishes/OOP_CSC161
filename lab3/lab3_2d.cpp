//Q.N 2d:Write a program to overload "++" (both prefix and postfix)operator
#include<iostream>
using namespace std;
class overload{
	int a;
	public:
	overload(int x){
		a=x;
	}
	void operator ++(){
		++a;
		cout<<"After prefix a="<<a<<endl;
	}
	void operator ++(int){
		a++;
		cout<<"After postfix a="<<a<<endl;
	}
};
int main(){
	overload O(10);
	++O;
	O++;
	return 0;
}
