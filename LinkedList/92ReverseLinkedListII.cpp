// /problems/reverse-linked-list-ii/description/

// Brute Force taking space O(n) and time O(2n);

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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(head==NULL)return NULL;
        if(left>=right)return head;
       ListNode* temp=head;
       stack<int> st;
       int cnt=0;
       while(temp){
           cnt++;
           if(cnt>=left && cnt <=right){
               st.push(temp->val);
           }
           temp=temp->next;
       }
       temp=head;
       cnt=0;
       while(temp){
           cnt++;
           if(cnt>=left && cnt <=right){
               temp->val=st.top();
               st.pop();
           }
           temp=temp->next;
       }
return head;
    }
};

// Optimized Approach
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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode* dummy=new ListNode(0,head);
        ListNode* temp=head;
        ListNode* leftPrev=dummy;
        for(int i=0;i<left-1;i++){
            leftPrev=leftPrev->next;
            temp=temp->next;
        }
        ListNode* saveLNode=temp;
        ListNode* prev=NULL;
        for(int i=0;i<=(right-left);i++){
            ListNode* nextNode=temp->next;
            temp->next=prev;
            prev=temp;
            temp=nextNode;
        }
        leftPrev->next=prev;
        saveLNode->next=temp;
        return dummy->next;

    }
};