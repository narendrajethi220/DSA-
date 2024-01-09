https://leetcode.com/problems/find-the-highest-altitude/

class Solution {
public:
    int largestAltitude(vector<int>& gain) {
         int currAlt=0;
         vector<int> alt;
         alt.push_back(0);
         for(int i=0;i<gain.size();i++){
             currAlt+=gain[i];
             alt.push_back(currAlt);
         }
         return *max_element(alt.begin(),alt.end());


    }
};

// 2nd Approach More Optimise Solution 
class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        gain.insert(gain.begin(),0);
        for(int i=0;i<gain.size()-1;i++){
            gain[i+1]=gain[i]+gain[i+1];
        }
        return *max_element(gain.begin(),gain.end());


    }
};
