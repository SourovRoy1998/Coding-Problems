//https://practice.geeksforgeeks.org/problems/smallest-number-on-left/0

#include <iostream>
#include <stack>
using namespace std;

int main() {
	//code
	int testcase;
	
	cin>>testcase;
	while(testcase--){
	    stack<int> s;
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	        cin>>arr[i];
	    for(int i=0;i<n;i++){
	        while(!s.empty() && s.top()>=arr[i])
	            s.pop();
	        
	        if(s.empty())
	            cout<<-1<<" ";
	        else
	            cout<<s.top()<<" ";
	            
	        s.push(arr[i]);
	    }
	    cout<<endl;
	    
	    
	    
	    
	}
	return 0;
}
