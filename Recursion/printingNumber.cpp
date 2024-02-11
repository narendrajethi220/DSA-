#include<iostream>
#include<stdio.h>
using namespace std;

void printOneToNum(int n){

    if(n<1){       //Base Condition
    return;
    }
    printOneToNum(n-1);   //Hypothesis
    cout<<n<<" ";        //Induction
}

void printNumtoOne(int n){
   if(n<1)return; //Base Condition
   cout<<n<<" ";  //Induction
   printNumtoOne(n-1); //Hypothesis 
}

int main(){
   int n;
   cin>>n;
   printOneToNum(n);
   cout<<endl;
   printNumtoOne(n);
    return 0;
}