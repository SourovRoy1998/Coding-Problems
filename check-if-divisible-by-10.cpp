//https://practice.geeksforgeeks.org/problems/check-if-divisible-by-10/0


#include <iostream>
using namespace std;

int main() {
	//code
	int testcase;
	cin>>testcase;
	while(testcase--){
	    string s;
	    cin>>s;
	    int last_digit_sum=0;
	    for(int j=0;j<s.length();j++){
	        int i=s.length()-j-1;
	        if(s[i]=='1'){
    	        if(j==0)
	                last_digit_sum+=1;
	            else if(j%4==0)
	                last_digit_sum+=6;
	            else if(j%4==1)
	                last_digit_sum+=2;
	            else if(j%4==2)
	                last_digit_sum+=4;
	            else if(j%4==3)
	                last_digit_sum+=8;
	        }
	    }
	    
	    if(last_digit_sum%10==0)
	        cout<<1<<endl;
	    else
	        cout<<0<<endl;
	}
	return 0;
}
