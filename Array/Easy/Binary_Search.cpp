#include<iostream>
#include<stdio.h>
using namespace std;
int binary_search(int arr[],int n,int key){
    int l=0;
    int r=n-1;
    while(l<=r){
        int mid =l+(r-l)/2;
       if(arr[mid]==key){
        return mid;
       }
       else if(arr[mid]>key){
        r=mid-1;
       }
       else if(arr[mid]<key){
        l=mid+1;
       }
    }
    return -1;
}

int main(){
    int arr[]={2,4,6,8,10,12,14};
    int n=sizeof(arr)/sizeof(int);
    int key=12;
    int res=binary_search(arr,n,key);
    cout<<"Binary Search Implementation"<<endl;
    if(res){
        cout<<key<<" is found at "<<res;
    }
    else {
        cout<<key<<" is NOT FOUND!";
    }
    return 0;
}