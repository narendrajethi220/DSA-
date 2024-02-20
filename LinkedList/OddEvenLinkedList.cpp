// https://leetcode.com/problems/odd-even-linked-list/

// Brute Force pseudoCode
int arr[];
temp=head;
while(temp && temp->next!=nullptr){
    arr.add(temp->data)
    temp=temp->next->next;
}

if(temp)arr.add(temp->data)

temp=head->next;
while(temp && temp->next!=nullptr){
   arr.add(temp->data);
   temp=temp->next->next;
}
if(temp)arr.add(temp->data)
i=0,temp=head;
while(temp){
    temp->data=arr[i];
    i++;
    temp=temp->next;
}
return head;

// Optimise Solution

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
    ListNode* oddEvenList(ListNode* head) {
       if(head==NULL || head->next==nullptr)return head;
       ListNode* odd=head;
       ListNode* even=head->next;
       ListNode* evenNode=head->next;
       while(evenNode!=NULL && evenNode->next!=NULL){
           odd->next=odd->next->next;
           evenNode->next=evenNode->next->next;
           odd=odd->next;
           evenNode=evenNode->next;
       } 
       odd->next=even;
       return head;
    }
};