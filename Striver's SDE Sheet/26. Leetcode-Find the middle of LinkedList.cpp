//leetcode-876. Middle of the Linked List
//https://leetcode.com/problems/middle-of-the-linked-list/
//take two pointer slow and fast and traverse

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
    ListNode* middleNode(ListNode* head) {
        ListNode *p=head;
        ListNode *q=head;
        while(q!=NULL && q->next!=NULL){
            p=p->next;
            q=q->next->next;
        }
        return p;
    }
};
