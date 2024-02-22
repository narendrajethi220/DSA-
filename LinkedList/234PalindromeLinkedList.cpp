// https://leetcode.com/problems/palindrome-linked-list/description/


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
// BruteForce Approach
if(head==NULL || head->next==nullptr)return true
stack<int> st;
temp=head;
while(temp){
    st.push(temp->val)
    temp=temp->next;
}
temp=head;
while(temp){
    if(temp->val!=st.top())return false;
    else{
        st.pop();
        temp=temp->next;
    }
}
return true

// Optimised Approach

class Solution {
public:
    ListNode* reverseLL(ListNode* head){
        if(head==NULL || head->next==NULL)return head;
        ListNode* newHead=reverseLL(head->next);
        head->next->next=head;
        head->next=nullptr;
        return newHead;
    }
   
    bool isPalindrome(ListNode* head) {
     if(head==NULL || head->next==nullptr)return true;
     ListNode* fast=head;      
     ListNode* slow=head;
     while(fast->next!=nullptr && fast->next->next!=nullptr){
         slow=slow->next;
         fast=fast->next->next;
     }
     ListNode* first=head; 
     ListNode* second=slow->next;
     second=reverseLL(second);
     while(second){
         if(first->val!=second->val)return false;
         first=first->next;
         second=second->next;
     }
    slow->next= reverseLL(slow->next);
     return true;
    }
};