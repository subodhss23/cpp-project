#include<iostream>
#include<vector>
#include<algorithm>
 
using namespace std;

int main(){
	
	vector<int> A = {10,9,8,1,2,3,4,5};

	sort(A.begin(), A.end());

	bool present = binary_search(A.begin(), A.end(), 100);
	bool present_1 = binary_search(A.begin(), A.end(), 3);

	cout << present << endl; 
	cout << present_1 << endl;

	A.push_back(100);
	bool present_2 = binary_search(A.begin(), A.end(), 100);

	cout << present_2;
	
	A.push_back(100);
	A.push_back(100);
	A.push_back(100);
	A.push_back(123);

	vector<int>::iterator it = lower_bound(A.begin(), A.end(),100);
	return 0;
	
}
