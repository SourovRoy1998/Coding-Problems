//https://practice.geeksforgeeks.org/problems/searching-in-an-array-where-adjacent-differ-by-at-most-k/0

#include <iostream>
using namespace std;

int main() {
	//code
	int testcase;
	cin>>testcase;
	while(testcase--){
	    int n,k,x;
	    cin>>n>>k;
	    int arr[n];
	    for(int i=0;i<n;i++)
	        cin>>arr[i];
	    cin>>x;
	    
	    int i=0,flag=0;
	    while(i<n){
	        if(arr[i]==x){flag=1;cout<<i<<endl;break;}
	        i=i+max(1,abs(arr[i]-x)/k);
	    }
	    if(!flag) cout<<-1<<endl;
	}
	return 0;
}
