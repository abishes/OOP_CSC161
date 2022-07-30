//Q.N 4:Write a program to convert hours into minutes. Use the concept of user_defined to basic
//type conversion
#include<iostream>
using namespace std;
class hours{
	int a;
	public:
	hours(int x){
		a=x;
	}
	operator int(){
		return (a*60);
	}
};
int main(){
	hours h1(7);
	int min=h1;
	cout<<"minutes:"<<min;
	return 0;
}
