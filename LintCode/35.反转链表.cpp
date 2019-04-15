/**

 * Definition of ListNode

 * 

 * class ListNode {

 * public:

 *     int val;

 *     ListNode *next;

 * 

 *     ListNode(int val) {

 *         this->val = val;

 *         this->next = NULL;

 *     }

 * }

 */





class Solution {

public:

    /*

     * @param head: n

     * @return: The new head of reversed linked list.

     */

    ListNode * reverse(ListNode * head) {

      

         // write your code here

        ListNode *dummy=NULL;

        while(head!=NULL){

            ListNode *temp=head->next;

            head->next=dummy;

            dummy=head;//dummy保存第一个节点

            head=temp;//temp指向的是待操作的结点

        }

        return dummy;

    }

   

};