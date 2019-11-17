#include<iostream>
using namespace std;

class Newclass{
	public:
	void print(){
		cout << "What is up??" << "\n";
	}

	void printing_again(int x);
};

void Newclass::printing_again(int x){
	cout << "We are printing again " << x << "\n";
}

int main(){
	Newclass newobj;

	newobj.print();
	newobj.printing_again(5);
	return 0;
}