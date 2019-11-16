#include <iostream>
using namespace std;

int main(){
	
	int pin_collection[] ={100,200,300, 400};
	int pin_code;
	int size = sizeof(pin_collection)/sizeof(pin_collection[0]);
	bool found = false;
		
	cout << "Thanks for Entering your card " << "\n";
	cout << " Enter your pin code,now: - ";
	cin >> pin_code;

	for (int i = 0; i < size; i++){
		if(pin_code == pin_collection[0]){
			cout << "Welcome in" << "\n";
			found = true;
			break;
		}
	}

	if(found){
		cout << "found" << endl;
	} else {
		cout << "not found" << endl;
	}
	return 0;

}	
