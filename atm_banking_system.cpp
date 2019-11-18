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

	void business(int i){
		cout << i << endl;
		cout << "Choose option from the menu:- " <<"\n";
		cin >> i;
		
		cout << "you have choose " << i << "\n";
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
			
			newobj.business(newobj.pin);
			return 0;
		}
	}
	cout << "you pin does not match this time" << "\n";
	return 0;
}
	
