#include <iostream>
#include <vector>
using namespace std;

struct ListNode {
	int val;
	ListNode *next;

	ListNode(int x) : val(x), next(NULL) {}

};

class Solution {
public:
	ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
		ListNode preHead(0), *p = &preHead;
		while (l1&&l2) {
			if (l1->val <= l2->val) {
				p->next = l1;
				l1 = l1->next;
				p = p->next;
			}
			else {
				p->next = l2;
				l2 = l2->next;
				p = p->next;
			}
		}

		if (l1)   p->next = l1;
		if (l2)   p->next = l2;

		return preHead.next;

	}
};

int main() {

	ListNode l1(1), l2(2), l3(4), l4(1), l5(3),l6(4);

	l1.next = &l2;

	l2.next = &l3;

	l4.next = &l5;

	l5.next = &l6;

	Solution s;

	ListNode *t = s.mergeTwoLists(&l1, &l4);

	while (t != NULL) {
		cout << t->val << endl;
		t = t->next;
	}

	return 0;

}