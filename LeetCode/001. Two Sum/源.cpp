#include<iostream>
#include<vector>
using namespace std;
vector<int> twoSum(vector<int>& nums, int target) {
	vector<int> result;
	for (int i = 0; i < nums.size() - 1; i++) {
		for (int j = i + 1; j < nums.size(); j++) {
			if (target == nums[i] + nums[j]) {
				result.push_back(i);
				result.push_back(j);
				return result;
			}
		}
	}
}

int main() {
	vector<int> nums = { 2, 7, 11, 15 };
	int target = 9;
	vector<int> A=twoSum(nums, target);
	vector<int>::iterator iter;

	for (iter = A.begin(); iter != A.end(); iter++)

	{

		cout << *iter << '\0';

	}
	return 0;
}