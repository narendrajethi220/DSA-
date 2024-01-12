// https://leetcode.com/problems/find-numbers-with-even-number-of-digits/

// Approach 1

class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count=0;
        int digit;
        for(auto i:nums){
            digit=0;
            while(i){
             i/=10;
             digit++;
            }
            if(digit%2==0){
                count++;
            }
        }
        return count;
    }
};

// Approach 2
class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count=0;
        for(auto i:nums){
         string num=to_string(i);
         int sz=num.length();
         if(sz%2==0){
             count++;
         }
         
        }
        return count;
    }
};
// Approach 3

    class Solution {
public:
  
    int digit(int i){
        int digi=0;
        while(i){
            i/=10;
            digi++;
        }
        return digi;
    }
    int findNumbers(vector<int>& nums) {
        int count=0;
        int cnt;
        for(auto i:nums){
           cnt=digit(i);
           if(cnt%2==0){
               count++;
           }

        }
        return count;
    }
};


// Optimised Approach
class Solution {
public:
    int findNumbers(vector<int>& nums) {
       string str = "";
        auto count = 0;
        
        for(auto i = 0; i < nums.size(); i++)
        {
            str = to_string(nums[i]);
            if(str.length() % 2 == 0)
            {
                count++;
            }
        }
        return count;
    }
};