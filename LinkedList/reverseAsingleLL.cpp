#include<bits/stdc++.h>
#include<iostream>
using namespace std;
class Node{
 public:
     int data;
     Node* next;
     
     Node(int data=0,Node*next=nullptr){
         this->data=data;
         this->next=next;
     }
};

Node*convertAtoLL(vector<int> arr){
    Node* head=new Node(arr[0]);
    Node* x=head;
    int i=1;
    while(i<arr.size()){
        Node* temp=new Node(arr[i],nullptr);
        x->next=temp;
        x=temp;
        i++;
    }
    return head;
    
}

void print(Node* head){
    Node* temp=head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
Node* reverseLL(Node* head){
    if(head==NULL || head->next==nullptr) return head;
  
    Node* temp=head;
    Node*reverseHead = reverseLL(head->next);
    head->next->next=temp;
    temp->next=nullptr;
    return reverseHead;
}


int main(){
    vector<int> arr={1,3,5,7,9,11,13};
    Node* newHead=convertAtoLL(arr);
    Node* temp1=reverseLL(newHead);
    print(temp1);
    
return 0;    
}
