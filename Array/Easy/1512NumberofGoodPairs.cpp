// https://leetcode.com/problems/number-of-good-pairs/

// Brute Force Approach

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int count=0;
        for(int i=0;i<nums.size()-1;i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]==nums[j]){
                    count++;
                }
            }
        }
        return count;

    }
};

// Other Solution 
// Counting the frequency of the element and adding it to count variable 
class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int,int> map;
        int count=0;
        for(int i:nums){
            count+=map[i];
            map[i]++;
        }
        return count;
 
    }
};