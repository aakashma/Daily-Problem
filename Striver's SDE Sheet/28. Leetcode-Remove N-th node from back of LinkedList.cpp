//leetcode-19. Remove Nth Node From End of List
//https://leetcode.com/problems/remove-nth-node-from-end-of-list/
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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* curr=head;
        int cnt=0;
        while(curr!=NULL){
            cnt++;
            curr=curr->next;
        }
        ListNode* curr1=head;
        ListNode* ans=curr1;
        int a=0;
        //if it ask for delete head
        //condition for deletion of head
        if(cnt==n){
            return head->next;
        }
        while(curr1!=NULL){
            a++;
            if(a==(cnt-n)){
                curr1->next=curr1->next->next;
                break;
            }
            curr1=curr1->next;
        }
        return ans;
    }
};
