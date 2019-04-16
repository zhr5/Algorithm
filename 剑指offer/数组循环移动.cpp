#include<iostream>
using namespace std;
typedef int arr[5];
void  Reverse(int *R, int from, int to) {
	int i, temp;
	for (i = 0; i<(to - from + 1)/2; i++) {
		temp = R[from + i];
		R[from+i] =R[to - i];
		R[to - i] = temp;
	}
}
void Converse(int *R, int n, int p) {
	p %= n;
	Reverse(R, 0, p - 1);
	Reverse(R, p, n - 1);
	Reverse(R, 0, n - 1);

}
int main() {
	
	int R[5]={ 1,2,3,4,5 };	
	Converse(R, 5, 3);
	for (int i = 0; i<5; i++) {
		cout << R[i] << endl;
	}
	return 0;
}
