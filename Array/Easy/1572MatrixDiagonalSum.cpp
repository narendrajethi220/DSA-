// https://leetcode.com/problems/matrix-diagonal-sum/

class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int m=mat.size();
        int n=mat[0].size();
        int sum=0;
        int sz=m*n;
        for(int i=0;i<sz;++i){
            int row=i/n;
            int col=i%n;
            if(row==col || row+col==n-1){
                sum+=mat[row][col];
            }
        }
        return sum;
    }
};