Problem Name: Delete Node in a Linked ListNode
Problem Link: https://leetcode.com/problems/delete-node-in-a-linked-list/

T.C = O(n)


class Solution {
public:
    void deleteNode(ListNode* node) {
        ListNode* temp = NULL;
        temp = node->next;
        
        int data;
        data = temp->val;
        node->val = data;
        
        temp = temp->next;
        node->next=temp;
    }
};