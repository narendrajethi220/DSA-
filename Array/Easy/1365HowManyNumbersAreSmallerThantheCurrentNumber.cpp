// https://leetcode.com/problems/how-many-numbers-are-smaller-than-the-current-number/

// Brute Force

class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
         vector<int> ans;
         int count;
        for(int i=0;i<nums.size();i++){
            count=0;
            for(int j=0;j<nums.size();j++){
                if(nums[j]<nums[i]){
                    count++;
                }
                
            }
            ans.push_back(count);
        }
        return ans;

    }
};

// Optimise Solution - Time Efficient Solution
class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
      map<int,int> mp;
      vector<int> ans=nums;
      int n=nums.size();
      sort(ans.begin(),ans.end());
      for(int i=n-1;i>=0;i--){
          mp[ans[i]]=i;
      } 
      for(int i=0;i<n;i++){
          nums[i]=mp[nums[i]];
      }
       
        return nums; 
      
        }
         
}; 