//Q.no. 6.Write a program to read information of three employees (name, address and salary). Make three separate 
//classes for each employee. Now, calculate the total salary of three employee and display all information.
//Use the concept of friend function in your program.
#include <iostream>
#include <cstring>
using namespace std;
class emp2;
class emp3;
class emp1{
	char name[20];
	char address[20];
	float salary;
	public:
	emp1(const char* name,const char* address, float salary){
		strcpy(this->name, name);
		strcpy(this->address, address);
		this->salary = salary;
	}
	friend void data(emp1&, emp2&, emp3&);
};
class emp2{
	char name[20];
	char address[20];
	float salary;
	public:
	emp2(const char* name,const char* address, float salary){
		strcpy(this->name, name);
		strcpy(this->address, address);
		this->salary = salary;
	}
	friend void data(emp1&, emp2&, emp3&);
};
class emp3{
	char name[20];
	char address[20];
	float salary;
	public:
	emp3(const char* name,const char* address, float salary){
		strcpy(this->name, name);
		strcpy(this->address, address);
		this->salary = salary;
	}
	friend void data(emp1&, emp2&, emp3&);
};

void data(emp1& E1, emp2& E2, emp3& E3){
	float total = E1.salary + E2.salary + E3.salary;
	cout<<"Total salary is "<<total<<endl;
	cout<<"Displaying information\n";
	cout<<"Name\tAddress\tSalary\n";
	cout<<E1.name<<"\t"<<E1.address<<"\t"<<E1.salary<<endl;
	cout<<E2.name<<"\t"<<E2.address<<"\t"<<E2.salary<<endl;
	cout<<E3.name<<"\t"<<E3.address<<"\t"<<E3.salary<<endl;
}

int main(){
	emp1 E1("Michal", "DC", 200000);
	emp2 E2("Dwight", "NYC", 150000);
	emp3 E3("Jim", "Florida", 100000);
	data(E1, E2, E3);
	return 0;
}
