// https://leetcode.com/problems/create-target-array-in-the-given-order/

// Time Efficient Solution

class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        vector<int> target;
        for(int i=0;i<nums.size();i++){
            target.insert(target.begin()+index[i],nums[i]);
        }
        return target;
    }
};


// Other Approach
class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
    
        for(int i=0;i<nums.size();++i){
            int currIndex=index[i];
            int currNum=nums[i];
        for(int j=i;j>currIndex;--j){
            nums[j]=nums[j-1];
      }    
         nums[currIndex]=currNum;
        }
    return nums;
    }
};
