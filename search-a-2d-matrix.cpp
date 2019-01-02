//https://leetcode.com/problems/search-a-2d-matrix/

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if(matrix.empty())
            return false;
        
        int m=matrix.size();
        int n=matrix[0].size();
        int a=0,b=m*n-1,mid;
        
        while(a<=b){
            mid=a+(b-a)/2;
            if(matrix[mid/n][mid%n]==target)
                return true;
            if(matrix[mid/n][mid%n]>target)
                b=mid-1;
            else
                a=mid+1;
        }
        return false;
        
    }
};
