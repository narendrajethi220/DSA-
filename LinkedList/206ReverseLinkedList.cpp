// https://leetcode.com/problems/reverse-linked-list/
// Brute Force Pseudo code
stack<int> st;
Node* temp=head;
while(temp){
    st.push(temp->data);
    temp=temp->next;
}

temp=head;
while(temp){
    temp->data=st.top();
    st.pop();
    temp=temp->next;
}

// Optimise Approach
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
        if(head==NULL || head->next==nullptr)return head;
       ListNode* temp=head;       
       ListNode* curr=head;
       ListNode* prev=nullptr;
       while(curr){
           curr=curr->next;
           temp->next=prev;
           prev=temp;
           temp=curr;
       }
       return prev;
    }
};