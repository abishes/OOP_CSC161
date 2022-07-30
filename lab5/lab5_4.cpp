//Q.no 4: Write a program to compare the age of three persons and display the information of elder one.
//Use "this" pointer to return the information of the person.
#include <iostream>
#include <cstring>
using namespace std;
class person{
	char name[20];
	int age;
	public:
	person(const char* name, int age){
		this->age = age;
		strcpy(this->name, name);
	}
	person& elder(person& p1, person& p2){
		return age > p1.age ? (age > p2.age ? *this : p2) : (p1.age > p2.age ? p1 : p2);
	}
	
	void display(){
		cout<<name<<" is the eldest and he is "<<age<<" years old\n";
	}
};

int main(){
	person P0("Michal", 45), P1("Dwight", 50), P2("Jim", 28);
	person P = P0.elder(P1, P2);
	P.display();
	return 0;
}
