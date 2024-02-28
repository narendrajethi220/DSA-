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