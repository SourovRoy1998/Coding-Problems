//https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array/

class Solution:
    def findDisappearedNumbers(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        hmap = {}
        List=[]
        for x in nums:
            hmap[x]=True
        for i in range(1,len(nums)+1):
            if i not in hmap:
                List.append(i)
        return List
