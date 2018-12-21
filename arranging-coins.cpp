//https://leetcode.com/problems/arranging-coins/

class Solution {
public:
    int arrangeCoins(int n) {
        int x=(-1+sqrt(1+8*double(n)))/2;
        return x;
    }
};
