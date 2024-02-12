#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int factorial(int num){

 if(num<=1)return 1;
 return factorial(num-1)*num;
}


int main(){
   int num;
   cin>>num;
   if(num<0){
    cout<<"Factorial of negative number is not defined";
   }
   else {
   cout<<factorial(num);   
   }

    return 0;
}

