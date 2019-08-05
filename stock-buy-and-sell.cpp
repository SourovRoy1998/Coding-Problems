//https://practice.geeksforgeeks.org/problems/stock-buy-and-sell/0


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
	    int buy_day=n-1,sell_day=n-1;
	    vector<vector<int>> result;
	    
	    while(buy_day>0){
	        if(arr[buy_day]>arr[buy_day-1]) buy_day--;
	        else{
	            if(buy_day!=sell_day)
	                result.push_back({buy_day,sell_day});
	            buy_day--;sell_day=buy_day;
	        }
	    }
	    if(arr[buy_day]<arr[sell_day]) result.push_back({buy_day,sell_day});
	    reverse(result.begin(),result.end());
	    if(result.empty())
	        cout<<"No Profit";
	    for(auto x:result){
	        cout<<"("<<x[0]<<" "<<x[1]<<") ";
	    }
	    cout<<endl;
	    
	}
	return 0;
}
