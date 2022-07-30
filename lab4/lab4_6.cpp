//Q.no. 5: Solve the following form of inheritance making one destructor in each class
#include <iostream>
using namespace std;
class alpha{
	protected:
	alpha(){
		cout<<"This is alpha constructor\n";
	}
	~alpha(){
		cout<<"This is alpha destructor\n";
	}
};
class beta{
	protected:
	beta(){
		cout<<"This is beta constructor\n";
	}
	~beta(){
		cout<<"This is beta destructor\n";
	}
};
class gamma:protected alpha, protected beta{
	public:
	gamma():alpha(),beta(){
		cout<<"This is gamma constructor\n";
	}
	~gamma(){
		cout<<"This is gamma destructor\n";
	}
};
int main(){
	gamma G;
	return 0;
}
