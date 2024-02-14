#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
        Node* back;
    public:
      Node(int data=0,Node* next=nullptr,Node*back=nullptr){
        this->data=data;
        this->next=next;
        this->back=back;
      }
};

Node* coverntArrayToDLL(vector<int> arr){
Node* head=new Node(arr[0]);
Node* prev=head;
for(int i=1;i<arr.size();i++){
    Node* temp=new Node(arr[i]);
    temp->back=prev;
    prev->next=temp;
    prev=temp;
}
return head;
}

void print(Node* head){
    if(head==NULL)return;
  Node* temp=head;
  
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

Node* deleteHead(Node* head){
    if( head==NULL || head->next==nullptr)return NULL;
   Node*temp=head;
   head=head->next;
   head->back=nullptr;
   delete temp;
   return head;

}


Node* deleteTail(Node* head){
   if(head==NULL || head->next==nullptr)return NULL;
    Node*temp=head;
    while(temp->next!=nullptr){
        temp=temp->next;
    }
    temp->back->next=nullptr;
    delete temp;
    return head;
  

}


int main(){

  vector<int> arr={0,2,4,6,8};
  Node* test1=coverntArrayToDLL(arr);
//   Node* test2=deleteHead(test1);
  Node* test3=deleteTail(test1);
  print(test3);
    return 0;
}