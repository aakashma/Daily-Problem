//leetcode-206. Reverse Linked List
//https://leetcode.com/problems/reverse-linked-list/

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
     ListNode *p=NULL;
        while(head!=NULL){
            ListNode *q=head->next;
            head->next=p;
            p=head;
            head=q;
        }
        return p;
    }
};
