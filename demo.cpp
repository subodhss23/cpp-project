#include<iostream>
using namespace std;

class Vechicle{
	public:
		int year;
		string model;		
};

int main(){
		
	Vechicle newobj;

	newobj.year = 12;
	newobj.model = "Toyota";

	cout << newobj.year << "\n";
	cout << newobj.model << "\n";

	return 0;
}
