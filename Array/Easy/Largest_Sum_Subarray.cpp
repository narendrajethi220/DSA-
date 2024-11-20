//Print the sum of each subarray and find out the largest sum

#include<iostream>
#include<climits>
using namespace std;

void printSumOfSubarray(int arr[], int n){
int max=INT_MIN;
int sum;
for(int i=0;i<n;i++){
   for(int j=i;j<n;j++){
    sum=0;
    for(int k=i;k<=j;k++){
        sum+=arr[k];
    }
    
        cout<<"Sum of the subarray is "<<sum<<endl;
    if(sum>max){
        max=sum;
    }
   }
}
cout<<"Max sum is "<<max<<endl;
}
int main(){
    int arr[]={10,20,30,40,50,60,70};
    int n=sizeof(arr)/sizeof(int);
    printSumOfSubarray(arr,n);
}