//leetcode-21. Merge Two Sorted Lists
//https://leetcode.com/problems/merge-two-sorted-lists/
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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        vector<int>v;
        while(list1!=NULL){
            v.push_back(list1->val);
            list1=list1->next;
        }
        while(list2!=NULL){
            v.push_back(list2->val);
            list2=list2->next;
        }
        sort(v.begin(),v.end());
        if(v.size()==0) return NULL;
        ListNode* curr=new ListNode(v[0]);
        ListNode* head1=curr;
        for(int i=1;i<v.size();i++){
            ListNode* head=new ListNode(v[i]);
            curr->next=head;
            curr=curr->next;
        }
        return head1;
    }
};
