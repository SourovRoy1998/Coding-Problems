//https://practice.geeksforgeeks.org/problems/longest-consecutive-subsequence/0

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int testcase;
	cin>>testcase;
	while(testcase--){
	    int n,result=0;
	    cin>>n;
	    vector<int> arr(n);
	    unordered_map<int,int> hmap;
	    for(int i=0;i<n;i++)
	        cin>>arr[i];
	    for(auto x : arr) hmap[x]++;
	    
	    for(auto x : arr){
	        if(hmap.find(x-1)==hmap.end()){
	            int curr=x,count=1;
	            while(hmap.find(curr+1)!=hmap.end()){
	                curr++; count++;
	            }
	            result=max(result,count);
	        }
	    }
	    cout<<result<<endl;
	}
	return 0;
}
