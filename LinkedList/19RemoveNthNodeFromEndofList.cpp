// https://leetcode.com/problems/remove-nth-node-from-end-of-list/

// Brute Force Approach
//  pseudo code

int count=0;
temp=head;
while(temp){
    count++;
    temp=temp->next;
}
if(count==n){
    newHead=head->next;
    delete head;
    return newHead;
}

int res=count-n;
temp=head;
while(temp){
    res--;
 if(res==0)break;
 temp=temp->next;
}
deleteNode=temp->next;
temp->next=temp->next->next;
delete delteNode;
return head;


// Optimised Solution
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
     if(head==NULL)return NULL;
     ListNode* fast=head;
     for(int i=0;i<n;i++){
         fast=fast->next;
     }
      if(!fast){
         ListNode* newHead=head->next;
         delete head;
         return newHead;
     }
     ListNode* slow=head;
     while(fast->next!=nullptr){
         slow=slow->next;
         fast=fast->next;
    
     }
     ListNode* dummyNode=slow->next;
     slow->next=slow->next->next;
     delete dummyNode;
     return head;
    }
};