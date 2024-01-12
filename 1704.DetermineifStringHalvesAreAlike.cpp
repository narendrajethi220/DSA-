// https://leetcode.com/problems/determine-if-string-halves-are-alike/
class Solution {
public:
    int countVowels(string s,int start,int end){
        int count=0;
        for(int i=start;i<end;i++){
        if(s[i]=='a' || s[i]=='A'||s[i]=='e' || s[i]=='E'|| s[i]=='I' || s[i]=='i'|| s[i]=='o' || s[i]=='O'|| s[i]=='u' || s[i]=='U')
    {
        count++;
    }
     }
      return count;
}

    bool halvesAreAlike(string s) {
        int len=s.size();
        int mid=s.size()/2;
        int v1=countVowels(s,0,mid);
        int v2=countVowels(s,mid,len);
        if(v1==v2){
            return true;
        }
       return false;
    }
};
