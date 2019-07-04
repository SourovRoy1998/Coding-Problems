//https://practice.geeksforgeeks.org/problems/height-of-heap

#include <iostream>
#include <math.h>
using namespace std;

int main() {
	//code
	int testcase;
	cin>>testcase;
	while(testcase--){
	    int n;
	    cin>>n;
	    int temp;
	    for(int i=0;i<n;i++)
	        cin>>temp;
	    
	    cout<<ceil(log2(n+1)-1)<<endl;
	}
	return 0;
}
