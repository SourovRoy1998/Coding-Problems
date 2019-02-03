//https://practice.geeksforgeeks.org/problems/find-winner-of-the-game-of-nim/0

#include <iostream>
using namespace std;

int main() {
	//code
	int testcase;
	cin>>testcase;
	while(testcase--){
	    int n;
	    cin>>n;
	    if(n%2==0)
	        printf("Player B\n");
	    else
	        printf("Player A\n");
	}
	return 0;
}
