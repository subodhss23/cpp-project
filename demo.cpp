#include<iostream>
using namespace std;


int main(){
	int localvar = 5;
	int *plocal = &localvar;
	int *pheap = new int;
	if (pheap == NULL){
		cout << "Error! No memory for pheap!";
		return 0;
	}
	*pheap = 7;
	cout << "localvar: " << localvar << "\n";
	cout << "*plocal: " << *plocal << "\n";
	cout << "*pheap: " << *pheap << "\n";

	delete pheap;
	if (pheap == NULL){
		cout << "Error! No memory for pheap!!";
		return 0;
	}
	
	*pheap = 9;
	cout << "*pheap: " << *pheap << "\n";
	delete pheap;
	return 0;
}
