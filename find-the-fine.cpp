//https://practice.geeksforgeeks.org/problems/find-the-fine/0

#include<iostream>
using namespace std;

int main() {
	//code
	int testcase;
	cin>>testcase;
	while(testcase--){
	    int n,d;
	    int ans=0;
	    cin>>n>>d;
	    int number[n];
	    int penalty[n];
	    for(int i=0;i<n;i++)
	        cin>>number[i];
	    for(int i=0;i<n;i++)
	        cin>>penalty[i];
	    for(int i=0;i<n;i++)
	        if(d%2!=number[i]%2)
	            ans+=penalty[i];
	    cout<<ans<<endl;
	        
	}
	return 0;
}
