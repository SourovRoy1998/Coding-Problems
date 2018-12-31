//https://leetcode.com/problems/valid-palindrome/

class Solution:
    def isPalindrome(self, s):
        """
        :type s: str
        :rtype: bool
        """
        list_alpha = [c.lower() for c in s if c.isalpha() or c.isdigit()]
        news = "".join(list_alpha)
        return news.lower()[::-1]==news
