//https://practice.geeksforgeeks.org/problems/lucky-alive-person-in-a-circle/0

#include <cmath>
using namespace std;

int main() {
	int testcase;
	cin>>testcase;
	while(testcase--){
	    int n;
	    cin>>n;
	    cout<<((n&(~(1<<(int)log2(n))))<<1)+1<<endl;
	}
	return 0;
}
