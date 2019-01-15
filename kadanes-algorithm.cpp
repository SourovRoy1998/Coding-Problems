//https://practice.geeksforgeeks.org/problems/kadanes-algorithm/0


#include<iostream>
using namespace std;

int main() {
	int testcase,n;
	cin>>testcase;
	while(testcase--){
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	        cin>>arr[i];
	    
	    int maxsum=arr[0];
	    int runsum=0;
	    
	    for(int i=0;i<n;i++){
	        runsum+=arr[i];
	        if(runsum>maxsum)
	            maxsum=runsum;
	            
	        if(runsum<0)
	            runsum=0;
	    }
	    cout<<maxsum<<endl;
	    
	    
	    
	}
	return 0;
}
