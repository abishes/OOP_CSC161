//Q.no 7: Write a program to show the concept of static function and static member variable
#include <iostream>
using namespace std;
class demo{
	static int num;
	public:
	demo(){
		num++;
	}
	static void display(){
		cout<<"The static number is :"<<num;
	}
};
int demo::num = 0;
int main(){
	demo d1, d2, d3;
	demo::display();
	return 0;
}
