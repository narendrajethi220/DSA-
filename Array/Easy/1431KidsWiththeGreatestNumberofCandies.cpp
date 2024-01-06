//https://leetcode.com/problems/kids-with-the-greatest-number-of-candies/

class Solution {
public:
 
    bool isMax(int ele,int max){
          if(ele>=max){
              return true;
          }
          return false;
  
    }
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
       int max=INT_MIN;
       vector<bool> ans(candies.size());
       for(int i=0;i<candies.size();i++){
           if(candies[i]>max){
               max=candies[i];
           }
       }
       for(int i=0;i<candies.size();i++){
           if(isMax((candies[i]+extraCandies),max)){
               ans[i]=true;
           }
           else{
               ans[i]=false;
           }
       }
     return ans;   
    }
};