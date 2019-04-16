#include<iostream>
#include<vector> 
int minNumberInRotateArray(std::vector<int> rotateArray) {
	if (rotateArray.empty())    return 0;
	int index1 = 0, index2 = rotateArray.size() - 1;
	int mid = index1;
	while (rotateArray[index1] >= rotateArray[index2]) {
		if (index2 - index1 == 1) {
			mid = index2;
			break;
		}
		mid = (index1 + index2) / 2;
		if (rotateArray[mid] >= rotateArray[index1]) {
			index1 = mid;
		}
		else if (rotateArray[mid] <= rotateArray[index2]) {
			index2 = mid;
		}

	}
	return rotateArray[mid];
}
int main() {
	std::vector<int> v{2,1,2,2,2 };
	std::cout << minNumberInRotateArray(v);
	return 0;
}