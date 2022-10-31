/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode *current=head;
        ListNode *backward=NULL,*forward=NULL;
        while(current!=NULL){
            forward=current->next;
            current->next=backward;
            backward=current; 
            current=forward; 
        }
        head=backward; 
        return head;
    }
};
