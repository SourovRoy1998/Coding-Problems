//https://practice.geeksforgeeks.org/problems/minimum-cost-of-ropes/0



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
	    priority_queue<int,vector<int>,greater<int>> pq;
	    for(int i=0;i<n;i++){
	        int temp;
	        cin>>temp;
	        pq.push(temp);
	    }
	    
	    
	    long long int cost=0;
	    long long int temp;
	    while(!pq.empty()){
	        temp=pq.top();
	        pq.pop();
	        if(!pq.empty()){
	            temp+=pq.top();
	            pq.pop();
	            if(!pq.empty())
       	            pq.push(temp);
	        }
	        cost+=temp;
	    }
	    cout<<cost<<endl;
	}
	return 0;
}
