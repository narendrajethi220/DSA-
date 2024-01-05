//https://leetcode.com/problems/build-array-from-permutation/

// This is not the full program but only the solution and is tested completely part.

class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {

       int sz=nums.size();
       
       // Encoding the answer
       for(int i=0;i<sz;i++){
       // Constant Space Complexity 
        nums[i]= nums[nums[i]]*sz;
       }

       //Decoding the answer;
       for(int i=0;i<sz;i++){
        nums[i]=nums[i]/n;
       }

      return nums[i];         

  
    }
};