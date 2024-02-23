// https://leetcode.com/problems/plus-one/description/

// Brute Force
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
     vector<int> ans;
     int carry=1;
     for(int i=digits.size()-1;i>=0;i--){
         if((digits[i]+carry)<10){
             ans.push_back(digits[i]+carry);
             carry=0;
     }
     else {
         int val=(digits[i]+carry)%10;
         ans.push_back(val);
     }
    }
    if(carry!=0){
        ans.push_back(1);
    }
    reverse(ans.begin(),ans.end());
    return ans;
    }
};

// Optimized Approach
