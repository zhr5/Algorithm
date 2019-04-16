#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
	bool Find(int target, vector<vector<int> > array) {
		int row = array.size();//行数
		int column = array[0].size();//列数
		int i = row - 1, j = 0;
		while (i >= 0 && j >= 0 && i<row&&j<column) {
			if (target<array[i][j])  i--;
			else if (target>array[i][j])  j++;
			else    return true;
		}
		return false;
	}
};

int main() {
	vector<vector<int> > vi ;
	vi[0][0] = 1; vi[0][1] = 3;
	vi[1][0] = 2; vi[1][1] = 6;
	int target = 5;
	Solution s;
	cout<<s.Find(target, vi);
	return 0;
}