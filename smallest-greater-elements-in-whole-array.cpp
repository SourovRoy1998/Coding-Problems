//https://www.geeksforgeeks.org/smallest-greater-elements-in-whole-array/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int testcase;
	cin>>testcase;
	while(testcase--){
	    set<int> s;
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	        s.insert(arr[i]);
	    }
	    for(int i=0;i<n;i++){
	        auto it=s.find(arr[i]);
	        it++;
	        if(it!=s.end())
	            cout<<*it<<" ";
	        else
	            cout<<"_"<<" ";
	    }
	    cout<<endl;
	    
	    
	}
	return 0;
}
