//https://leetcode.com/problems/valid-anagram/

class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length())
            return false;
        map<char,int> hashmap;
        for(int i=0; i<s.length();i++){
            hashmap[s[i]]++;
            hashmap[t[i]]--;
        }
        for (auto count : hashmap)
            if (count.second) return false;
        return true;
            
        
        
    }
};
