
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

	if (i == 1){
		cout << "Welcome to Airline Reservation System Menu" << "\n";
		cout << "Choose option from 2 to 6 " << "\n";
	}
	else if (i == 2){
		cout << "Welcome to seat reservation option" << "\n";
		cout << " L1, L2, L3, R1, R2, R3 " << "\n";
		cout << " Are Available right now " << "\n";
		
		string seat;	
		cout << "Choose seat of your choice " << "\n";
 		cin >> seat;
		cout << "Congratulation you have choose " << seat << " " << "for your seat" << "\n";
	}
	else if (i == 3){
		
		int ticket_num[] = {100,110,101,200,202, 222, 300};
		int ticket_id;
		int size = sizeof(ticket_num)/sizeof(ticket_num[0]);
			
		cout << "Enter your ticket id:" << '\n';
		cin >> ticket_id;

		for (int i = 0; i < size; i++){
			if(ticket_num[i] == ticket_id){
				cout << "you have a valid ticket" << '\n';
				return 0;
			}
		}
		
		cout << "you do not have a valid ticket"  << '\n';
		cout << "To purchas a valid ticket press 1" << "\n";
		
		int purchase;
		cin >> purchase;
		
		if (purchase == 1){
			cout << "Congratulation you have purchase a valid ticket to New York" << '\n';
		} else {
			cout << "Not a valid option" << '\n';
		}
	
		return 0;
	}
	else if (i == 4){
		cout << "Following are the schedule for this afternoon" <<'\n';
		cout << " KTM -> SFO ----------- 12:00pm ----- on time "<< '\n';
		cout << " KTM -> SJC ----------- 01:30pm ----- on time "<< '\n';
		cout << " KTM -> OKL ----------- 02:45pm ----- on time "<< '\n';
		cout << " KTM -> NYC ----------- 03:22pm ----- delayed "<< '\n';
		cout << "\n";
		cout << " If you have any questions or concerns, please see us in booth" << '\n';		
	}
}
