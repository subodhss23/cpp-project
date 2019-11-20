#include<iostream>
using namespace std;


int main(){

	int i = 10;
	int *j = &i;


	cout << j << " This is the address of i" << "\n";
	cout << &i << " &i" ;

	return 0;
}
