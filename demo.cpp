#include<iostream>
using namespace std;

typedef unsigned short int USHORT;


inline void add(){
	USHORT i = 10;
	USHORT j = 20;
	
	USHORT addi = 0;

	addi = i + j;

	cout << addi << endl;

}


int main(){
	inline void add();

	return 0;
}
	
