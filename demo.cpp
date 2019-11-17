#include<iostream>
using namespace std;

class Employee{
	private:
		int salary;

	public:
		void setSalary(int x){
			salary = x;
		}

		int getSalary(){
			return salary;
		}
};

class Vechicle{
	private:
		int year;

	public:
		void setyear(int x){
			year = x;
		}

		int getyear(){
			return year;
		}
};

class Another_vechicle : public Vechicle{
	public:
		string model = "Mustang";
};

int main(){
	// Employee newobj;
	// newobj.setSalary(1000);
	// cout << newobj.getSalary() ;

	Vechicle newobj1;
	newobj1.setyear(1992);
	newobj1.getyear();
	return 0;
}