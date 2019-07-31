//https://practice.geeksforgeeks.org/problems/inversion-of-array/0


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
	    int arr[n];
	    for(int i=0;i<n;i++)
	        cin>>arr[i];
	    int result=0;
	    for(int i=0;i<n;i++)
	        for(int j=i+1;j<n;j++)
	            if(arr[i]>arr[j]) result++;
	   cout<<result<<endl;
	    
	}
	return 0;
}
