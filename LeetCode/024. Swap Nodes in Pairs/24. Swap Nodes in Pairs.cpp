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
	ListNode* swapPairs(ListNode* head) {
	
		ListNode *newHead = new ListNode(-1);

		newHead->next = head;

		for (ListNode *p1 = newHead, *p2 = head; p2 && p2->next; p1 = p2, p2 = p2->next)

		{

			p1->next = p2->next;

			p2->next = p1->next->next;

			p1->next->next = p2;

		}

		return newHead->next;
	}
};

int main() {

	ListNode l1(1), l2(2), l3(3), l4(4);// l5(3), l6(4);

	l1.next = &l2;

	l2.next = &l3;

	l3.next = &l4;

	//l4.next = &l5;

	//l5.next = &l6;

	Solution s;

	ListNode *t = s.swapPairs(&l1);

	while (t != NULL) {
		cout << t->val << endl;
		t = t->next;
	}

	return 0;

}
