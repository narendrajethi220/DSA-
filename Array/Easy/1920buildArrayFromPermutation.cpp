//https://leetcode.com/problems/build-array-from-permutation/

// This is not the full program but only the solution and is tested completely part.
class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
         
         int sz=nums.size();
    //Encoding the answer
          for(int i=0;i<sz;i++){
    // for constant space complexity
              nums[i]+=(nums[nums[i]]%sz)*sz;
          }

          //Decoding the answer
          for(int i=0;i<sz;i++){
              nums[i]/=sz;
          }
          return nums;

    }
};
