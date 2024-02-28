// https://leetcode.com/problems/intersection-of-two-linked-lists/description/
// Brute Force Approach
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(headA==NULL || headB==NULL)return NULL;
    ListNode* temp=headA;
    unordered_map<ListNode*,int> mp;
    while(temp){
        mp[temp]=1;
        temp=temp->next;
    }
    temp=headB;
    while(temp){
        if(mp.find(temp)!=mp.end()){
            return temp;
        }
        temp=temp->next;
    }
    return NULL;

    }
};

// Optmized Approached
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* collisionPoint(ListNode* t1,ListNode*t2,int diff){
        while(diff--){
            t2=t2->next;
        }
       while(t1!=t2){
           t1=t1->next;
           t2=t2->next;
       }
       return t1;

    }
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* temp1=headA;
        ListNode* temp2=headB;
        int len1=0;
        int len2=0;
        while(temp1){
            len1++;
            temp1=temp1->next;
        }
        while(temp2){
            len2++;
            temp2=temp2->next;
        }
        if(len1<len2){
          return collisionPoint(headA,headB,len2-len1);
        }
        
        
        return collisionPoint(headB,headA,len1-len2);
        
    }
};

// Optimized Approach
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(headA==NULL ||headB==NULL)return NULL;

       ListNode* temp1=headA;
       ListNode* temp2=headB;
       
       while(temp1!=temp2){
        temp1=(temp1==NULL)?headB:temp1->next;
        temp2=(temp2==NULL)?headA:temp2->next;
       }
       return temp1;
    }
};