//Q.no 3: Write a program to swap two numbers using function template.
#include <iostream>
using namespace std;
template <typename T>
void Swap(T& x, T& y){
	T temp = x;
	x = y;
	y = temp;
}
int main(){
	int x1 = 10, x2 = 20;
	float y1 = 10.22f, y2 = 20.22f;
	cout<<"Before swapping\n";
	cout<<"x1 = "<< x1 << " and x2 = "<< x2 <<endl;
	cout<<"y1 = "<< y1 << " and y2 = "<< y2 <<endl;
	Swap(x1, x2);
	Swap(y1, y2);
	cout<<"After swapping\n";
	cout<<"x1 = "<< x1 << " and x2 = "<< x2 <<endl;
	cout<<"y1 = "<< y1 << " and y2 = "<< y2 <<endl;
}
