//Q.no 4 :Write a program to overload function template.
#include <iostream>
using namespace std;
template <typename T>
void demo(T x){
	cout <<"Template display x = "<< x <<endl;
}
void demo(int x){
	cout << "Explicite display x = " << x <<endl;
}
int main(){
	demo(12345);
	demo(123.45f);
	demo('c');
	return 0;
}
