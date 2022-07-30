//Q.no 5: Write a program to show the basic concept of exception handling
#include <iostream>
using namespace std;
void div(int x, int y){
	try{
		if(y != 0){
			cout<<"x/y = " << (float)x/y << endl;
		}
		else
			throw(y);
	}
	catch(int a){
		cout<<"exception: cannot divide by " << a <<endl;
	}
}

int main(){
	div(10, 20);
	div(10, 0);
	return 0;
}
