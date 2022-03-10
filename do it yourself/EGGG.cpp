

#include <bits/stdc++.h>
using namespace std;


int FindMinFromRotatedArray(int arr[] , int n){
	int low = 0;
	int high = n-1;

	while(low < high){
		int mid = (low + high)/2;
		if(arr[mid] < arr[high]){
			mid = high;
		}
		else{
			low = mid + 1;
		}
	}
	return arr[high];

}

int main(){
	int n;
	cin>>n;
	int arr[n];

	for(int i= 0 ; i< n ; i++){
		cin>>arr[i];
	}

	cout<<FindMinFromRotatedArray(arr,n);

}






