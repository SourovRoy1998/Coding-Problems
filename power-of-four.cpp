//https://leetcode.com/problems/power-of-four/

class Solution {
public:
    bool isPowerOfFour(int n) {
        while((n&3)==0 && (n>>2))
            n=n>>2;
        return n==1;
    }
};
