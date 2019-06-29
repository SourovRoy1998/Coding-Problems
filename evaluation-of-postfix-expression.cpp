//https://practice.geeksforgeeks.org/problems/evaluation-of-postfix-expression/0


#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int testcase;
	cin>>testcase;
	while(testcase--){
	    int p,q;
	    string str;
	    stack<int> stk;
	    cin>>str;
	    for(auto x: str){
	        if(isdigit(x))
	            stk.push(x-'0');
	        else if(x=='+'){
	            p=stk.top();stk.pop();
	            q=stk.top();stk.pop();
	            stk.push(p+q);
	        }
	        else if(x=='-'){
	            p=stk.top();stk.pop();
	            q=stk.top();stk.pop();
	            stk.push(q-p);
	        }
	        else if(x=='*'){
	            p=stk.top();stk.pop();
	            q=stk.top();stk.pop();
	            stk.push(p*q);
	        }
	        else if(x=='/'){
	            p=stk.top();stk.pop();
	            q=stk.top();stk.pop();
	            stk.push(q/p);
	        }
	    }
	    cout<<stk.top()<<endl;
	}
	return 0;
}
