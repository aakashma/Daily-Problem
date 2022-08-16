//leetcode-2. Add Two Numbers
//https://leetcode.com/problems/add-two-numbers/
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
//create two vectors for storing val from both linked list
//create an empty linked list
//just add the ith element from the both vectors
//and add into new linked list and store the carry into new variable if any for further addition
//into next node.
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        vector<int>v1,v2;
        while(l1!=NULL){
            v1.push_back(l1->val);
            l1=l1->next;
        }
        while(l2!=NULL){
            v2.push_back(l2->val);
            l2=l2->next;
        }
        int a=v1[0]+v2[0];
        int b=a/10;
        a=a%10;
        ListNode* curr=new ListNode(a);
        ListNode* head1=curr;
        int i=1;
        for(;i<min(v1.size(),v2.size());i++){
            a=b+v1[i]+v2[i];
            b=a/10;
            a=a%10;
            ListNode* head=new ListNode(a);
            curr->next=head;
            curr=curr->next;
        }
        if(v1.size()==v2.size()){
                if(b>0){
                ListNode* head=new ListNode(b);
                curr->next=head;
                curr=curr->next;
            }  
        }
        else if(v1.size()>v2.size()){
            for(;i<v1.size();i++){
                a=b+v1[i];
                b=a/10;
                a=a%10;
                ListNode* head=new ListNode(a);
                curr->next=head;
                curr=curr->next;
            }
            if(b>0){
                ListNode* head=new ListNode(b);
                curr->next=head;
                curr=curr->next;
            }
        }
        else{
             for(;i<v2.size();i++){
                a=b+v2[i];
                b=a/10;
                a=a%10;
                ListNode* head=new ListNode(a);
                curr->next=head;
                curr=curr->next;
            }
            if(b>0){
                ListNode* head=new ListNode(b);
                curr->next=head;
                curr=curr->next;
            }
        }
        return head1;
    }
};
