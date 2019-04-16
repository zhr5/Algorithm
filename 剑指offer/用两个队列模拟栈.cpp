#include<queue>
using namespace std;
class Solution
{
public:
	void push(int node) {
		q1.push(node);
	}

	int pop() {
		int n1 = q1.size();
		for (int i = 0; i < n1 - 1; i++) {
			int temp = q1.front();
			q1.pop();
			q2.push(temp);
		}
		int res = q1.front();
		q1.pop();
		return  res;

	}

private:
	queue<int> q1;
	queue<int> q2;
};