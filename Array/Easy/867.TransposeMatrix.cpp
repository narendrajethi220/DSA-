// https://leetcode.com/problems/transpose-matrix/

class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
       vector<vector<int>> ans(n, vector<int>(m, 0));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                ans[j][i]=matrix[i][j];
            }
        }
      return ans;
    }
};

// Space Approach 2
class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        int sz=m*n;
       vector<vector<int>> ans(n, vector<int>(m, 0));
        for(int i=0;i<sz;i++){
            int row=i/n;
            int col=i%n;
                ans[col][row]=matrix[row][col];
            }
        
      return ans;
    }
};

// Runtime Optimized Approach 
class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        vector<vector<int>> ans;
        for(int i=0;i<n;i++){
            vector<int> tmp;
            for(int j=0;j<m;j++){
                tmp.push_back(matrix[j][i]);
            }
            ans.push_back(tmp);
        }
        return ans;
    }
};