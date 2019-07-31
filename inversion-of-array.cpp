//https://practice.geeksforgeeks.org/problems/inversion-of-array/0

//Brute Force Solution
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int testcase;
	cin>>testcase;
	while(testcase--){
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	        cin>>arr[i];
	    int result=0;
	    for(int i=0;i<n;i++)
	        for(int j=i+1;j<n;j++)
	            if(arr[i]>arr[j]) result++;
	   cout<<result<<endl;
	    
	}
	return 0;
}





//Efficient Merge Sort Solution
#include <iostream>
#include <bits/stdc++.h>
using namespace std;


long long int merge(int arr[], int l, int m, int r, int& size){
    long long int result=0;
    int dummy[size];
    int i=l, j=m+1, k=l;
    while(i<=m && j<=r){
        if(arr[j]<arr[i]){ dummy[k++]=arr[j++]; result+=(m+1-i); }
        else dummy[k++]=arr[i++];
    }
    while(i<=m) dummy[k++]=arr[i++];
    while(j<=r) dummy[k++]=arr[j++];
    for(int i=l;i<=r;i++)
        arr[i]=dummy[i];
    return result;
}

long long int mergeSort(int arr[], int l, int r, int& size){
    if(l==r) return 0;
    int m=(l+r)/2;
    long long int result=0;
    result=mergeSort(arr,l,m,size)+mergeSort(arr,m+1,r,size);
    result+=merge(arr,l,m,r,size);
    return result;
}



int main() {
	//code
	int testcase;
	cin>>testcase;
	while(testcase--){
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	        cin>>arr[i];
	    long long int result=0;
	    result=mergeSort(arr,0,n-1,n);
	    //for(int i=0;i<n;i++) cout<<arr[i]<<" :";
	    cout<<result<<endl;
	}
	return 0;
}

