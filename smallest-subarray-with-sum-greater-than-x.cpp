//https://practice.geeksforgeeks.org/problems/smallest-subarray-with-sum-greater-than-x/0

class Solution {
public:
    int shortestSubarray(vector<int>& A, int K) {
        int length=INT_MAX;
        int temp=0,j=0;
        for(int i=0;i<A.size();i++){
            if(temp<K){
                temp=temp+A[i];
            }
            if(temp>=K){
                while(temp>=K & j<A.size()){
                    length=min(length,i-j+1);
                    temp-=A[j];
                    j++;
                }
            }
        }
        if(length==INT_MAX)
            return -1;
        return length;
    }
};
