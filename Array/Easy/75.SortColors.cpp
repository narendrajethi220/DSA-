// https://leetcode.com/problems/sort-colors/description/

// Optimized Approach
class Solution {
public:
    // void swap(int& a, int& b){
    //     int temp=a;
    //     a=b;
    //     b=temp;
    // }
    void sortColors(vector<int>& nums) {
     if(nums.size()==0 || nums.size()==1)return;
         int i=0;
     int j=nums.size()-1;
     int l=0;
     while(i<=j){
         if(nums[i]==0){
         swap(nums[i],nums[l]);
         i++;
         l++;
         }
       else if(nums[i]==1){
             i++;
         }
       else{
            swap(nums[i],nums[j]);
            j--;
         }
     }
    }
};