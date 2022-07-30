//Q.no 2: Write a program of class template with multiple parameters
#include <iostream>
using namespace std;
template <typename T1, typename T2>
class demo{
	T1 a;
	T2 b;
	public:
	demo(T1 x, T2 y):a(x),b(y){}
	void display(){
		cout << "a = " << a << " and b = " << b;
	}
};
int main(){
	demo <int, float> D(10, 123.55f);
	D.display();
	return 0;
}
