//https://leetcode.com/problems/zigzag-conversion/submissions/

class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows==1)
            return s;
        string arr[numRows];
        int j=0;
        bool up=true;
        for(int i=0;i<s.length();i++){
            arr[j]+=s[i];
            if(j==numRows-1)
                up=false;
            if(j==0)
                up=true;
            if(up)
                j++;
            else
                j--;
        }
        string result;
        for(auto x:arr)
            result+=x;
        return result;
    }
};
