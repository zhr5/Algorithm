# 19. Remove Nth Node From End of List 

标签（空格分隔）： LeetCode

Given a linked list, remove the nth node from the end of list and return its head.
For example,
   Given linked list: 1->2->3->4->5, and n = 2.

   After removing the second node from the end, the linked list becomes 1->2->3->5.
Note:
Given n will always be valid.
Try to do this in one pass.

#巧妙的思路：
一个指针先走n步，然后两个同步走，直到第一个走到终点，第二个指针就是需要删除的节点。
需要注意的细节:
-
开始的时候我删除结点的时候:
用的是 h2->next = h1;
但是当case是[1,2]  1;
的时候也就是待删除的是最后一个结点的时候会无法删除,所以
还是改成 h2->next = h2->next->next;


---






