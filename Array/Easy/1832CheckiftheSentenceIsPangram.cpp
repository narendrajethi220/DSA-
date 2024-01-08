// https://leetcode.com/problems/check-if-the-sentence-is-pangram/

class Solution {
public:
    bool checkIfPangram(string sentence) {
        unordered_map<char,int> map;
        for(int i=0;i<sentence.size();i++){
            map[sentence[i]]++;
        }
        if(map.size()==26){
            return true;
        }
        return false;
    }
};

// 2nd Approaach - Optimise solution 

class Solution {
public:
    bool checkIfPangram(string sentence) {
        
        bool isPresent[26]={0};
        int sz=sentence.length();
        int pos=INT_MIN;
        if(sz<26)return 0;
        for(int i=0;i<sz;i++){
            pos=sentence[i]-'a';
            isPresent[pos]=1;
        }
        for(int i=0;i<26;i++){
        if(isPresent[i]!=1)
        return 0;
        }
        return 1;
        }
};
