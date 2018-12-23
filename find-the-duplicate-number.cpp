//https://leetcode.com/problems/find-the-duplicate-number/

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size();
        
        for (int i=0;i<n;i++){
            int p=abs(nums[i]);
            if(nums[p]<0)
                return p;
            nums[p]=-nums[p];
        }
    }
};
