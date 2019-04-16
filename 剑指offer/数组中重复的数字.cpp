#include<iostream>
#include<algorithm>
using namespace std;
class Solution {
public:
	// Parameters:
	//        numbers:     an array of integers
	//        length:      the length of array numbers
	//        duplication: (Output) the duplicated number in the array number
	// Return value:       true if the input is valid, and there are some duplications in the array number
	//                     otherwise false
	bool duplicate(int numbers[], int length, int* duplication) {
		sort(numbers, numbers + length);
		int i = 0,j;
		for (i = 0; i<length - 1; i++) {
			if (numbers[i] == numbers[i + 1]) {
				 j = i;
				break;
			}
		}
		if (i == length - 1)    return false;
		else {
			*duplication = numbers[j];
			cout << *duplication << endl;
			return true;
		}
	}
};
int main() {
	int num [7]= {2,3,1,0,2,5,3};
	Solution s;
	int *d =NULL;
	*d = 2;
	s.duplicate(num, 7, d);
	return 0;
}