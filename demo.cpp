#include<iostream>
using namespace std;

int main(){
	
	int a = 10;
	int new_num;
	
	while(1){
		cout << "Enter a new num " << endl;
		cin >> new_num;
		if(new_num == a){
			cout << "you got it "<<'\n';
			break;
		}
	}	
	return 0;
}
