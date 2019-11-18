#include<iostream>
using namespace std;


class ATM{
	public:

	ATM(){
		int pin_collection[] = {100,200,300,400};
	}

	int pin;
	
	void check_balance(){
		cout << "You have enough balance in your account "<< "\n";
	}

	
	
	int  business(int i){
		cout << "Choose option from the menu:- " <<"\n";
	
		cout << "1.Check your balance. " << "\n";
		cout << "2.Withdraw cash from checking account. " << "\n";
		cout << "3.Withdram cash from saving account. " << "\n";
		cin >> i;
		cout << "you have choose " << i << "\n";	
	
		return i;
	}

	void options(){
		int business(int i);
		if(i == 1){
			cout << "you have choose option one" << "\n";
		} else if (i == 2){
			cout << "you are now into your checking account" << "\n";
		} else if (i == 3){
			cout << "you are now in your saving account " << "\n";
		} else {
			cout << "Not a valid option" << endl; 
		}
	}
	

};



int main(){
	
	int pin_collection[] = {100,200,300};	
	int size = sizeof(pin_collection)/sizeof(pin_collection[0]);

	cout << "*****Welcome to the Bank of West portal********" << "\n";
	cout << "Enter you pin code:- ";
	
	ATM newobj;
	
	cin >> newobj.pin;

	for (int i = 0; i < size; i++){
		if(pin_collection[i] == newobj.pin){
			cout<<"Welcome in our valuable customer.."<< "\n";
			
			//newobj.business(newobj.pin);
			newobj.options();
			return 0;
		}
	}
	cout << "you pin does not match this time" << "\n";
	return 0;
}
	
