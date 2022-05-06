Problem Name: Middle of the Linked List
Problem Link: https://leetcode.com/problems/middle-of-the-linked-list/


class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        int len, i=0;
        ListNode* head1=head;
        ListNode* head2=head;
        if(head1==NULL || head1->next==NULL){
            return head1;
        }

        while(head2 != NULL && head2->next != NULL){
            head1=head1->next;
            head2=head2->next->next;
        }
    
        return head1;
        
    }
};