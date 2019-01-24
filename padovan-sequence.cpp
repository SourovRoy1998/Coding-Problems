//https://practice.geeksforgeeks.org/problems/padovan-sequence/0

#include<iostream>

using namespace std;

int main() {
	int testcase;
	cin>>testcase;
	while(testcase--){
	    int n,p1,p2,p3,temp;
	    cin>>n;
	    
	    if(n<3)
	        cout<<1<<endl;
	    else{
	        p1=1;p2=1;p3=1;
	        for(int i=4;i<=n+1;i++){
	            temp=(p1+p2)%1000000007;
	            p1=p2;
	            p2=p3;
	            p3=temp;
	        }
	        cout<<p3<<endl;
	        
	    }
	      
	    
	    
	}
	return 0;
}
