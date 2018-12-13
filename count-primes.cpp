//https://leetcode.com/problems/count-primes/

class Solution {
public:
    int countPrimes(int n) {
        int count=0;
        bool arr[n+1]={false};
        for(int i=2;i<n;i++){
            if(arr[i]==false){
                int j=2*i;
                while(j<n){
                    arr[j]=true;
                    j+=i;
                }
            }
        }
        for(int i=2;i<n;i++)
            if(arr[i]==false){
                count++;
                //cout<<i<<endl;
            }
        return count;
    }
};
