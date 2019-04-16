#include<iostream>
#include<queue>
using namespace std;
struct TreeNode {
int val;
struct TreeNode *left;
struct TreeNode *right;
TreeNode(int x) :
val(x), left(NULL), right(NULL) {
}
};
/*层序遍历 用一个辅助队列*/
class Solution {
public:
	vector<int> PrintFromTopToBottom(TreeNode* root) {
		queue<TreeNode*> q;
		vector<int> res;
		if (root == nullptr) return res;
		q.push(root);
		while (!q.empty()) {
			TreeNode* t = q.front();
			res.push_back(t->val);
			q.pop();
			if (t->left)    q.push(t->left);
			if (t->right)    q.push(t->right);
		}
		return res;
	}
};