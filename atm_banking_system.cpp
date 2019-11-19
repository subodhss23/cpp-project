#include<iostream>
using namespace std;


class ATM{
	public:
	
	// check if the pin is in the system
	int check_pin(int x){
	int pin_collection[] = {100,200,300,400};
		for (int i = 0; i < 4; i++){
			if(x == pin_collection[i]){
				cout << "pin found"<< endl;
				return x;
			}
		}
		cout << "value not found" << endl;
		return 0;
	}

	// choose menu option
	void options(){
		cout << "Choose an option from below  " << "\n";
		cout << "1. Check balance. " << "\n";
		cout << "2. Deposit cash. " << "\n";
		cout << "3. Withdraw cash. " << "\n";
		
	}

	// validate option
	void validation_option(int n){
		if(n == 1){
			cout << "Your balance is $40 " << "\n";
		} else if (n == 2){
			cout << "How much money do you want to deposit?" << "\n";
			int cash;
			cin >> cash;

			system("clear");
			cout << "You have deposited $" << cash  << "\n";
		} else if (n == 3){
			cout << "How much cash do you want to withdraw?" << "\n";
			
			int avail_cash = 1000;
			int withdraw_cash;
			
			cin >> withdraw_cash;
			
			int new_amount = avail_cash - withdraw_cash;
			cout << "you have $" << new_amount << " in your account" << "\n";
		} else {
			cout << "not a valid option" << "\n";
		}
	}	

	
};


int main(){
	system("clear");
	cout << "Enter your pin number below:- " << "\n";
	
	int pin;
	cin >> pin;
	
	ATM newobj;
	
	newobj.check_pin(pin);

	system("clear");
	newobj.options();

	int n;
	cin >> n;
	system("clear");

	newobj.validation_option(n);
	
	
	
	return 0;

}

	
