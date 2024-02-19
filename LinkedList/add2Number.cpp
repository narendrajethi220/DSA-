// https://leetcode.com/problems/add-two-numbers/

// solution

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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
   if(l1==NULL)return l2;
   if(l2==NULL)return l1;
   ListNode* temp1 =l1;
   ListNode* temp2 =l2;
   int carry=0;
   ListNode* dummyNode=new ListNode(-1);
   ListNode* curr=dummyNode;
   int sum;
   while(temp1 !=NULL || temp2 !=NULL){
    sum=carry;
    if(temp1)sum+=temp1->val;
    if(temp2)sum+=temp2->val;
    carry=sum/10;
    sum=sum%10;
    ListNode* newNode=new ListNode(sum);
    curr->next=newNode;
    curr=curr->next;
  if(temp1)temp1=temp1->next;
  if(temp2)temp2=temp2->next;
   }
   if(carry)
   {
    ListNode* newNode=new ListNode(carry);
    curr->next=newNode;
    // curr=newNode;   
   }
   return dummyNode->next;
    }
};