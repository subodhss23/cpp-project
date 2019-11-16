#include<iostream>
using namespace std;

class Car{
	public:
		int year;
		string model;

		void newmethod();
};

void Car::newmethod(){
	cout << "Has this thing changed yet?" << "\n";
}

int main(){
	Car newobj;
	newobj.newmethod();
	return 0;
}