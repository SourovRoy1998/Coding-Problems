//https://practice.geeksforgeeks.org/problems/prime-number-of-set-bits/0

#include <bits/stdc++.h>
using namespace std;

int count_bit(int x){
    int count=0;
    while(x){
        count+=x%2;
        x/=2;
    }
    return count;
}

int main() {
	//code
    int testcase;
    cin>>testcase;
    set<int> s={2,3,5,7,11,13,17,19};
    while(testcase--){
        int l,r;
        cin>>l>>r;
        int count=0;
        for(int x=l;x<=r;x++){
            if(s.find(count_bit(x))!=s.end())
                count++;
        }
        cout<<count<<endl;
    }
	return 0;
}
