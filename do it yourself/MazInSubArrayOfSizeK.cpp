/*

ip = {10,8,5,12,15,7,6}
k=3

op = 10 12 15 15 15



*/

#include<bits/stdc++.h>
using namespace std;

void printMax(int arr[] , int n , int k){

	for(int i=0 ; i< n-k+1 ; i++){
		int mx = arr[i];
		for(int j=i+1 ; j< i+k ; j++){
			mx = max(arr[j] , mx);
		}
		cout<<mx<<" ";
	}
}


int main(){


	int arr[] ={10,8,5,12,15,7,6};
	int n = sizeof(arr)/sizeof(arr[0]);
	int k=3;

	printMax(arr, n , k);
}




