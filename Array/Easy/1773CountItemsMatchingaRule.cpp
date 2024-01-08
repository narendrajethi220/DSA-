// https://leetcode.com/problems/count-items-matching-a-rule/

class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int count=0;
        for(auto item:items){
            if(ruleKey=="type" && item[0]==ruleValue){
                count++;
            }
            else if(ruleKey=="color" && item[1]==ruleValue){
                count++;
            }
            if(ruleKey=="name" && item[2]==ruleValue){
                count++;
            }
            
        }
        return count;
    }
};

// 2nd Approach More Time efficient Approach

class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
       int count=0;
       int key=0;
       if(ruleKey=="color")key=1;
       else if(ruleKey=="name")key=2;
       for(int i=0;i<items.size();i++){
           if(items[i][key]==ruleValue)count++;
       }
       return count;

    }
};

// 3rd Approach Space Efficient Approach

class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int count = 0;
        for (const auto& item : items) {
            count += (ruleKey == "type" && item[0] == ruleValue) ||
                     (ruleKey == "color" && item[1] == ruleValue) ||
                     (ruleKey == "name" && item[2] == ruleValue);
        }

        return count;

    }
};
