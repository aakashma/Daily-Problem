//leetcode-237. Delete Node in a Linked List
//https://leetcode.com/problems/delete-node-in-a-linked-list/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
//Method-1
class Solution {
public:
    void deleteNode(ListNode* node) {
        ListNode *p=node->next;
        *node=*p;
        delete p;
        
    }
};
//method-2
class Solution {
public:
    void deleteNode(ListNode* node) {
        *node=*node->next;
        
    }
};
