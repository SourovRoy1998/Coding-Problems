//https://leetcode.com/problems/sort-array-by-parity-ii/

class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& A) {
        vector<int> B(A.size());
        int i=0,j=1,k=0;
        while(i<A.size() || j<A.size()){
            if(A[k]%2==0){
                B[i]=A[k];
                i+=2;
            }
            else{
                B[j]=A[k];
                j+=2;
            }
            k++;
        }
        return B; 
    }
};
