//https://practice.geeksforgeeks.org/problems/path-in-matrix/0

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int testcase;
	cin>>testcase;
	while(testcase--){
	    int n;
	    cin>>n;
	    int arr[n][n];
	    for(int i=0;i<n;i++)
	        for(int j=0;j<n;j++)
	            cin>>arr[i][j];
	    vector<vector<int>> memoize(n+2,vector<int>(n+2,0));
	    for(int i=1;i<=n;i++)
	        for(int j=1;j<=n;j++)
	            memoize[i][j]=arr[i-1][j-1]+max(memoize[i-1][j],max(memoize[i-1][j+1],memoize[i-1][j-1]));
	   
	    int maxi=INT_MIN;
	    for(int i=1;i<=n;i++)
	        maxi=max(maxi,memoize[n][i]);
	    cout<<maxi<<endl;
	}
	return 0;
}
