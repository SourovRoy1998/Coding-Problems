//https://leetcode.com/problems/first-unique-character-in-a-string/

class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int> hmap;
        for(char x:s)
            hmap[x]++;
        for(int i=0;i<s.length();i++)
            if(hmap[s[i]]==1)
                return i;
        return -1;
    }
};
