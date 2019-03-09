//https://leetcode.com/problems/diagonal-traverse/submissions/

class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& matrix) {
        if(matrix.empty())
            return {};
        int i=0,j=0,count=0;
        int m=matrix.size(),n=matrix[0].size();
        bool isUp=true;
        vector<int> result;
    
        while(count<m*n){
            if(isUp){
                for(;i>=0 && j<n;i--,j++){
                    count++;
                    result.push_back(matrix[i][j]);
                }
                if(i<0 && j<n)
                    i=0;
                if(j==n)
                    j--,i+=2;
                }
            
            else{
                for(;j>=0 && i<m;j--,i++){
                    count++;
                    result.push_back(matrix[i][j]);
                }
                if(j<0 && i<m)
                    j=0;
                if(i==m)
                    i--,j+=2;
                }
            
            isUp=!isUp;
        }
        return result;
    }
};
