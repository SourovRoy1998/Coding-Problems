//https://leetcode.com/problems/factorial-trailing-zeroes/

class Solution {
public:
    int trailingZeroes(int n) {
        int count=0;
        long long int x=5;
        while(x<=n){
            count+=(n/x);
            x*=5;
        }
        return count;
    }
};
