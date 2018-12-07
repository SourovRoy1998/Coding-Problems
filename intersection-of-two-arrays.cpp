//https://leetcode.com/problems/intersection-of-two-arrays/

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> intersection;
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        
        int i=0,j=0;
        
        while(i<nums1.size() && j<nums2.size()){
            int x=nums1[i];
            int y=nums2[j];
            if(x==y && intersection.empty()){
                intersection.push_back(x);
                i++;
                j++;
            }
            else if(x==y && x!=intersection.back()){
                intersection.push_back(x);
                i++;
                j++;
            }
            else if(x<y)
                i++;
            else
                j++;
            
        }
        
        return intersection;
    }
};
