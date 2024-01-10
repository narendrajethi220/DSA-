// https://leetcode.com/problems/flipping-an-image/

class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        for(auto& i:image){
            reverse(i.begin(),i.end());
        }
        for(int i=0;i<image.size();i++){
            for(int j=0;j<image[i].size();j++){
                if(image[i][j]==1)image[i][j]=0;
                else if(image[i][j]==0)image[i][j]=1;
            }
        }
        return image;

        }
};

// Optimise Approach
class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        for(auto & i:image){
            reverse(i.begin(),i.end());
            transform(i.begin(),i.end(),i.begin(),[](int& x){return x^1;});
        }
      return image;
    }
};