// https://leetcode.com/problems/plus-one/description/

// Brute Force
// Using Extra Space
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
// Without using Extra Space
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry=1;
        for(int i=digits.size()-1;i>=0;i--){
            if((digits[i]+carry)<10){
                digits[i]=digits[i]+carry;
                 carry=0;
            }
            else{
                digits[i]=(digits[i]+carry)%10;
            }
        }
        if(carry){
            digits.insert(digits.begin(),1);
        }
        return digits;
        
    }
};

// Optimized Approached
// 0 ms runtime
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        for(int i=digits.size()-1;i>=0;i--){
            if(digits[i]<9){
                digits[i]++;
                return digits;
            }
            else{
                digits[i]=0;
            }
        }
        digits.push_back(0);
        digits[0]=1;
        return digits;
    }
};