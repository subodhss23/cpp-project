
// airlines management system

#include <iostream>
using namespace std;


int main(void){
	
	cout << " Airlines Reservation System Menu" << '\n';
	cout << "1. Reserve seat" << '\n';
	cout << "2. User ticket" << '\n';
	cout << "3. Flights schedule" << '\n';
	cout << "4. Display Passanger" << '\n';
	cout << "5. Exit program" << '\n';

	int i;
	int choice[] = {1,2,3,4,5};
	cout << "Choose One: ";
	cin >> i;
	
	while(1){
		cout << "Choose one: " <<'\n';
		cin >> i;
		
		for (int a = 0; a < 5; a++){
			if(choice[i] == a){
				cout << "welcome" << '\n';
				return 0;
			}
		}
	}
					
	
	cout << "\n" << "You have choose " << i << "\n";

	
		cout << "Welcome to Airline Reservation System Menu" << "\n";
	
	 if (i == 1){
		string seats_avail[] = {"L1", "L2", "L3", "R1", "R2", "R3" };
		int size = sizeof(seats_avail)/ sizeof(seats_avail[0]);
		cout << "\n *********** Welcome to seat reservation option*************" << "\n";
		for (int i = 0 ; i < size; i++){
			cout << seats_avail[i] << " ------ empty seat "<< '\n';
		}
		cout << " Are Available right now " << "\n";
		
		string seat;	
		cout << "Choose seat of your choice " << "\n";
 		cin >> seat;
		
		for(int i = 0; i < size; i++){
			if(seats_avail[i] == seat){
				cout << "Congratulation you have choose " << seat << " " << "for your seat" << "\n";
				return 0;
			}
		}
		cout << "Seat that you have choose is not available" << '\n';
	}
	else if (i == 2){
		
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
	else if (i == 3){
		cout << "Following are the schedule for this afternoon" <<'\n';
		cout << " KTM -> SFO ----------- 12:00pm ----- on time "<< '\n';
		cout << " KTM -> SJC ----------- 01:30pm ----- on time "<< '\n';
		cout << " KTM -> OKL ----------- 02:45pm ----- on time "<< '\n';
		cout << " KTM -> NYC ----------- 03:22pm ----- delayed "<< '\n';
		cout << "\n";
		cout << " If you have any questions or concerns, please see us in booth" << '\n';		
	}
	else if (i == 4){
		cout << "Folling is the seats available and occupied in our flight " << '\n';
		cout << "x represnting full and o representing empty" << '\n';
		cout << "\a";
		cout << '\n';
		cout << "xxx xxx xxo xxx"<< '\n';
		cout << "xxx xxx xxx xxx"<< '\n';
		cout << "xxx xxx xxx ooo"<< '\n';
		cout << "xxx xxx xxx oxx"<< '\n';
		cout << "xxx xxx xxx xxx"<< '\n';
		cout << "xxx xxx xxx xxx"<< '\n';
		cout << "xxx xxx xxx xxx"<< '\n';
		cout << "xxx xxx xxx xxx"<< '\n';
		cout << "xxx xxx ooo xxx"<< '\n';
	}
	else if (i == 5){
		cout <<"Thanks for your time to visit our application," <<'\n';
		cout << "Hope you have a wonderful journey!!!" <<'\n';
	}	
	
	return 0;
}
