//Q.no. 5: Solve the following form of inheritance making one constructor in each class
#include <iostream>
using namespace std;
class alpha{
	protected:
	alpha(){
		cout<<"This is alpha constructor\n";
	}
};
class beta{
	protected:
	beta(){
		cout<<"This is beta constructor\n";
	}
};
class gamma:protected beta, protected alpha{
	public:
	gamma():alpha(),beta(){
		cout<<"This is gamma constructor\n";
	}
};
int main(){
	gamma G;
	return 0;
}
