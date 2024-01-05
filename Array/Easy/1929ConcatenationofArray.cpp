//https://leetcode.com/problems/concatenation-of-array/

class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int sz=nums.size();
        
        for(int i=0;i<sz;i++){
            int a=nums[i];
            nums.push_back(a);
        }
        return nums;
    }
};

//More space efficient program 

class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
       int sz=nums.size();
       nums.resize(2*sz);
       for(int i=0;i<sz;i++){
           nums[i+sz]=nums[i];
       }
       return nums;
    }
};