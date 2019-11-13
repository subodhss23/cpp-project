
// airlines management system

#include <iostream>
using namespace std;


int main(void){
	
	cout << "1. Airlines Reservation System Menu" << '\n';
	cout << "2. Reserve seat" << '\n';
	cout << "3. User ticket" << '\n';
	cout << "4. Flights schedule" << '\n';
	cout << "5. Display Passanger" << '\n';
	cout << "6. Exit program" << '\n';

	int i;
	cout << "Choose One: ";
	cin >> i;
	cout << "\n" << "You have choose " << i << "\n";

	cout << string(50, '\n');
	return 0;

}
