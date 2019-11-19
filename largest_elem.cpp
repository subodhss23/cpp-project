#include<iostream>
using namespace std;


int main(){
	int i;
	int a[10];
	int temp;
	int j;
	
	cout << "Enter any 10 number for the array : " << "\n";
	
	for (i = 0; i <= 10; i++){
		cin >> a[i];
	}
	
	cout << " \n Data before sorting:- " << "\n";
	for (j = 0; j < 10; j++){
		cout << a[j];
	}
	
	for(i = 0; i <= 10; i++){
		for(j = 0; j <= 10 - 1; j++){
			if(a[j] > a[j+1]){
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}

	cout << "\n Data after sorting" << "\n";
	for(j = 0; j < 10; j++){
		cout <<a[j];
	}
	return 0;
} 
