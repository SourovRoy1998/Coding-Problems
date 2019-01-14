//https://practice.geeksforgeeks.org/problems/rearrange-characters/0

#include <string>
#include <unordered_map>
using namespace std;

int main() {
	int testcase,most_freq,n;
	string s;
	cin>>testcase;
	while(testcase--){
	    cin>>s;
	    n=s.length();
	    most_freq=0;
	    unordered_map<char,int> hmap;
	    
	    for(int i=0;i<n;i++){
	        hmap[s[i]]++;
	        most_freq=max(most_freq,hmap[s[i]]);
	    }
	    if(most_freq>(n+1)/2)
	        cout<<0<<endl;
	    else
	        cout<<1<<endl;
	    
	    
	}
	return 0;
}
