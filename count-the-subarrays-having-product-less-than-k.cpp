//https://practice.geeksforgeeks.org/problems/count-the-subarrays-having-product-less-than-k/0

#include<iostream>
using namespace std;

int main() {
	long long int testcase,n,k;
	cin>>testcase;
	while(testcase--){
	    cin>>n>>k;
	    long long int arr[n];
	    for(long long int i=0;i<n;i++)
	        cin>>arr[i];
	        
	        
	    long long int ans=0;
	    long long int prod=1;
	    for(long long int start=0,end=0;end<n;end++){
	        prod*=arr[end];
	        
	        while(end>start && prod>=k)
	            prod/=arr[start++];
	        if(prod<k)
	            ans+=(end-start+1);
	    }
	    cout<<ans<<endl;
	        
	    }
	    
	    
	    
	    
	
	return 0;
}
