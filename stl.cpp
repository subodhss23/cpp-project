#include<iostream>
#include<vector>
#include<algorithm>
 
using namespace std;

bool f(int x, int y){
	 return x > y;
}

int main(){
	
	vector<int> A = {10,9,8,1,2,3,4,5};

	sort(A.begin(), A.end());

	bool present = binary_search(A.begin(), A.end(), 100);
	bool present_1 = binary_search(A.begin(), A.end(), 3);

	cout << present << endl; 
	cout << present_1 << endl;

	A.push_back(100);
	bool present_2 = binary_search(A.begin(), A.end(), 100);

	cout << present_2 << endl;
	
	A.push_back(100);
	A.push_back(100);
	A.push_back(100);
	A.push_back(123);
 
	vector<int>::iterator it = lower_bound(A.begin(), A.end(),100);
	vector<int>::iterator it1 = upper_bound(A.begin(), A.end(),100);

	cout << *it << endl;
	cout << *it1 << endl;
	
	cout << it1 - it << endl;
	cout << endl;
	sort(A.begin(), A.end(),f);
	vector<int>::iterator it3;
	
	for (it3 = A.begin(); it3 != A.end(); it3++){
		cout << *it3 << endl;
	}

// *** Summary of above experiment *** //
// 	sort vector of integers
//	binary search to check if the element is present
//	if vector is sorted -> upper_bound and lower_bound can be done
//	finding the duplication by subtracting upper_bound to lower_bound





































	return 0;
	
}
