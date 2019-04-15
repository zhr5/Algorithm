#include<iostream>
#include<vector>
using namespace std;

vector<int> mergeSortedArray(vector<int> &A, vector<int> &B) {
	// write your code here
	vector <int> C;
	int i = 0, j = 0,k=0;
	while (i < A.size()&&j < B.size()) {
		if (A[i] <= B[j]) {
			C.push_back(A[i]);
			i++;
		}
		else {
			C.push_back(B[j]);
			j++;
		}
	}
	while (i < A.size()) {
		C.push_back(A[i]);
		i++;
	}
	while (j < B.size()) {
		C.push_back(B[j]);
		j++;
	}
	return C;

}

int main() {
	vector <int> A = { 1,2,3,4 };
	vector<int> B = { 1,2,2,3,4,4,5,6 };
	vector<int> C;
	C=mergeSortedArray(A, B);
	vector<int>::iterator iter;
	for (iter = C.begin(); iter != C.end(); iter++)
	{
		cout << *iter << '\0';
	}
	return 0;
}