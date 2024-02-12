#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class Node{
  public:
      int data;
      Node* next;

    Node(int data1=0,Node* next1=nullptr){
    this->data=data1;
    this->next=next1;
  }
};

Node* convertArrayToLL(vector<int> & arr){
    Node* head=new Node(arr[0]);
    Node* mover=head;

    for(int i=0;i<arr.size();i++){
        Node* temp=new Node(arr[i]);
        mover->next=temp;
        mover=temp;
    }
    return head;
}
int lenghtOfLL(Node *head){
    int cnt=0;
    Node *temp=head;
    while(temp){
        temp=temp->next;
        cnt++;
    }
       return cnt;
}

void traversingInLL(Node* head){
    Node *temp=head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
bool searchingInLL(Node *head,int val){
   Node *temp=head;
   while(temp){
    if(temp->data==val)return true;
    temp=temp->next;
   }
   return false;
}

Node* deleteHead(Node* head){
    if(head==NULL) return head;
    Node* temp= head;
    head=head->next;
    delete temp;
    return head;
}


Node* deleteTail(Node* head){
    if(head==NULL || head->next==nullptr)return NULL;
    Node* temp=head;
    while(temp->next->next!=nullptr){
        temp=temp->next;
    }
    free(temp->next);
    temp->next=nullptr;
    return head;

}

Node* deleteIth(Node* head,int ith){

if(head==NULL)return NULL;
if(ith==1){
    Node *temp=head;
    head=head->next;
    delete temp;
       return head;
}
   int cnt=0;
   Node* temp=head;
   Node* prev=NULL;
   while(temp){
    cnt++;
    if(cnt==ith){
        prev->next=prev->next->next;
        delete temp;
        break;
    }
    prev=temp;
    temp=temp->next;
   }
  return head;

}

Node* insertAtHead(Node* head, int data){
  return new Node(data,head);
}

Node* insertAtTail(Node*head, int data){
    if(head==NULL)return new Node(data);
    Node* temp=head;
    while(temp->next!=nullptr){
        temp=temp->next;
    }
    Node* nNode=new Node(data);
    temp->next=nNode;
    return head;
}

Node* insertAtIthPosition(Node* head, int data, int i){
    if(head==NULL){
        if(i==1){
            return new Node(data);
        }
        else return NULL;
    }
   int cnt=0;
   Node* temp=head;
   while(temp){
    cnt++;
    if(cnt==i-1){
        Node* x=new Node(data);
        x->next=temp->next;
        temp->next=x;
        return head;
    }
    temp=temp->next;
   }
  cnt++;
  if(cnt==i+1){
    Node* x=new Node(data);
    temp->next=x;
    return head;
  }

return head;
}

Node* insertingBforeValue(Node* head, int data, int val){
  if(head==NULL)return NULL;
  if(head->data==val)return new Node(data,head);
  Node* temp=head;
  while(temp){
    if(temp->next->data==val){
     Node* x=new Node(data);
     x->next=temp->next;
     temp->next=x;
     return head;
    }
    temp=temp->next;
  }
return head;
}

int main(){
    vector<int> arr={1,3,5,7,9};
    Node* LL=convertArrayToLL(arr);
    int len=lenghtOfLL(LL);
    cout<<"Lenght of the List is "<<len<<endl;
    int key;
    cout<<"Enter the Element to be Search ";
    cin>>key;
    cout<<searchingInLL(LL,key);
    cout<<endl;
    Node* newLL = deleteHead(LL);
    traversingInLL(newLL);
    cout<<endl;
    Node* newL=deleteTail(newLL);   
    traversingInLL(newL);  
    cout<<endl;
    int i;
    cout<<"Enter ith Position to delete";
    cin>>i;
    cout<<endl;
    Node* NewList=deleteIth(newL,i);
    traversingInLL(NewList);
    cout<<endl;
    Node* newNode=insertAtHead(NewList,11);
    traversingInLL(newNode);
    cout<<endl;
    Node*  newTemp=insertAtTail(newNode,13);
    traversingInLL(newTemp);
     cout<<endl;
    Node *newTemp1=insertAtIthPosition(newTemp,11,6);
    traversingInLL(newTemp1);
    cout<<endl;
    Node* newTemp2=insertingBforeValue(newTemp1,0,1);
    traversingInLL(newTemp2);

    return 0;
}