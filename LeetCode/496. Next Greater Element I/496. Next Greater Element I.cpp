#include <iostream>
#include<vector>
#include <stack>
using namespace std;

class Solution {
public:
	vector<int> nextGreaterElement(vector<int>& findNums, vector<int>& nums) {
		vector <int> res;
		unsigned int i = 0, j = 0;
		for (i; i < findNums.size(); i++) {
			int j = 0, k = 0;
			for (j; j < nums.size(); j++) {
				if (findNums[i] == nums[j]) {
					break;
				}
			}

			for (k = j + 1; k < nums.size(); k++) {
				if (nums[k] > nums[j]) {
					res.push_back(nums[k]);
					break;
				}
			}
			if (k == nums.size()) {
				res.push_back(-1);
			}
		}
		return res;
	}
};

int main() {
	Solution s;
	vector<int> v1 = { 4,1,2 };
	vector<int> v2 = { 1,3,4,2 };
	vector<int> res=s.nextGreaterElement(v1, v2);
	for (unsigned int i = 0; i < res.size(); i++) {
		cout << res[i] << " " << endl;
	}
	return 0;
}