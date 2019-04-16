#include<stack>
using namespace std;
class Solution
{
public:
	void push(int node) {
		stack1.push(node);
	}

	int pop() {
		if (!stack2.empty()) {
			int res = stack2.top();
			stack2.pop();
			return res;
		}
		else {
			while (!stack1.empty()) {
				int res = stack1.top();
				stack2.push(res);
				stack1.pop();
			}
			int r = stack2.top();
			stack2.pop();
			return r;
		}
	}

private:
	stack<int> stack1;
	stack<int> stack2;
};