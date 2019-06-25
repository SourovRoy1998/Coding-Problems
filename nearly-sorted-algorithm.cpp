//https://practice.geeksforgeeks.org/problems/nearly-sorted-algorithm/0



#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int testcase;
	cin>>testcase;
	while(testcase--){
	    int n,k;
	    cin>>n>>k;
	    priority_queue<int,vector<int>,greater<int>> pq;
	    for(int i=0;i<n;i++){
	        int temp;
	        cin>>temp;
	        pq.push(temp);
	        if(i>k){
	            cout<<pq.top()<<" ";
	            pq.pop();
	        }
	    }
	    while(!pq.empty()){
	        cout<<pq.top()<<" ";
	        pq.pop();
	    }
	    cout<<endl;
	    
	}
	
	
	return 0;
}
