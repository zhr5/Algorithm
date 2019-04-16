#include<iostream>
#include<vector>
using namespace std;

struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) :
		val(x), next(NULL) {
	}
}; 
class Solution {
public:
	vector<int> v;
	vector<int> printListFromTailToHead(ListNode* head) {
		
		ListNode *p = head;
		if (p != nullptr) {
			if (p->next !=nullptr) {
				printListFromTailToHead(p->next);
			}
			v.push_back(p->val);
		}
		return v;
	}
};

ListNode * CreateListNode(int val) {
	ListNode *p = new ListNode(val);
	return p;
}
ListNode * ConnectListNodes(ListNode *p1, ListNode *p2) {
	p1->next = p2;
	return p1;
}

int main() {
	ListNode* pNode1 = CreateListNode(1);

	ListNode* pNode2 = CreateListNode(2);

	ListNode* pNode3 = CreateListNode(3);

	ListNode* pNode4 = CreateListNode(4);

	ListNode* pNode5 = CreateListNode(5);
	pNode1->next = pNode2;
	pNode2->next = pNode3;
	pNode3->next = pNode4;
	pNode4->next = pNode5;

	Solution S;
	vector<int> v=S.printListFromTailToHead(pNode1);
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << endl;
	}
	return 0;
}
