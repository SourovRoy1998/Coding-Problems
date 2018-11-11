//https://leetcode.com/problems/long-pressed-name/

class Solution {
public:
    bool isLongPressedName(string name, string typed) {
        int i=0;
        int m=name.length();
        int n=typed.length();
        for(int j=0;j<n;j++){
            if(i<m && name[i]==typed[j])
                i++;
            else if(j==0 || typed[j-1]!=typed[j])
                return false;
        }
        return i==m;
    }
};
