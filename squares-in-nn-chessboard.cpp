//https://practice.geeksforgeeks.org/problems/squares-in-nn-chessboard/0

#include<iostream>
int main() {
	int testcase,n;
	scanf("%d",&testcase);
	while(testcase--){
	    scanf("%d",&n);
	    printf("%d\n",n*(n+1)*(2*n+1)/6);
	}
	return 0;
}
