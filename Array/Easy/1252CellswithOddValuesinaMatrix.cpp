// https://leetcode.com/problems/cells-with-odd-values-in-a-matrix/

// Brute Force

class Solution {
public:
    int oddCells(int m, int n, vector<vector<int>>& indices) {
        vector<vector<int>> ans(m,vector<int>(n,0));
        int count=0;
        for(auto i:indices){
            for(int j=0;j<n;j++){
                ans[i[0]][j]++;
            }
            for(int j=0;j<m;j++){
                ans[j][i[1]]++;
            }
        }  
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
             if(ans[i][j]&1)count++;
            }
        }
    return count;
    }
};

// 2nd Time Optimise Approach 
class Solution {
public:
    int oddCells(int m, int n, vector<vector<int>>& indices) {
        vector<vector<int>> ans(m,vector<int>(n,0));
        int count=0;
        int sz=m*n;
        for(auto i:indices){
            for(int j=0;j<n;j++){
                ans[i[0]][j]++;
            }
            for(int j=0;j<m;j++){
                ans[j][i[1]]++;
            }
        }  
        for(int i=0;i<sz;++i){
            int row=i/n;
            int col=i%n;
            if(ans[row][col]&1)count++;
        }
    return count;
    }
};

// Optimise Solution 
class Solution {
public:
    int oddCells(int m, int n, vector<vector<int>>& indices) {
        int count=0;
      vector<int> row(m,0);
      vector<int> col(n,0);
      int sz=m*n;
      for(auto i:indices){
          row[i[0]]++;
          col[i[1]]++;
      }

      for(int i=0;i<sz;i++){
          int r=i/n;
          int c=i%n;
          int value=row[r]+col[c];
          if(value&1)count++;
      }
      return count;
    }
};