//https://practice.geeksforgeeks.org/problems/jumping-numbers/0



#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> result;

void bfs(int x, int n){
    queue<int> q;
    q.push(x);
    
    while(!q.empty()){
        int num=q.front();q.pop();
        if(num<=n){
            result.push_back(num);
            if(num%10==0) q.push(num*10+1);
            else if(num%10==9) q.push(num*10+8);
            else{
                q.push(num*10+num%10-1);
                q.push(num*10+num%10+1);
            }
        }
    }
}

int main() {
	//code
	int testcase;
	cin>>testcase;
	while(testcase--){
	    int n;
	    result={};
	    cin>>n;
	    result.push_back(0);
	    for(int x=1;x<=9 && x<=n;x++)
	        bfs(x,n);
	    sort(result.begin(),result.end());
	    for(auto x: result)
	        cout<<x<<" ";
	    cout<<endl;
	}
	
	return 0;
}
