

#include <bits/stdc++.h>
using namespace std;


int FindMinFromRotatedArray(int arr[] , int n){
	int low = 0;
	int high = n-1;

	while(low < high){
		int mid = (low + high)/2;
		if(arr[mid] < arr[high]){
			high = mid;
		}
		else{
			low = mid + 1;
		}
	}
	return arr[high];

}

int FindMinFromRotatedArrayDublicate(int arr[] , int n){
	int low = 0;
	int high = n-1;

	while(low < high){
		int mid = (low + high)/2;
		if(arr[mid] < arr[high]){
			high = mid;
			}
		else if( arr[mid] > arr[high]){
			low = mid + 1;
		}
		else{
			high--;
		}
	}
	return arr[high];

}

int buble(int arr[] , int n){

	for(int i = 0 ; i < n ; i++){
		for(int j = 0 ; j < n ; j++){
			if(arr[j+1] > arr[j]){
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp; 
			}
		}
	}

	for(int i =0 ; i< n ; i++){
		cout<<arr[i]<<" ";
	}
}
//majak majak chyaat pattern ....
int print(int n){
	for(int i=n; i >= 1 ; i--){
		for(int j=i ; j < n ; j++){
			cout<<" ";
		}
		for(int j= 1 ; j <= i ; j++){
			cout<<"* ";
		}
		cout<<endl;
	}
	return 0;
}
 
int SearchOnRotatedArray(int arr[] , int n , int k){
	int low = 0 ; 
	int high = n-1;

	while(low <= high){
		int mid = (low + high)/2;

		if(arr[mid] == k) return mid;

		if(arr[low] <= arr[mid]){
			if(k >= arr[low] && k <= arr[mid]){
				high = mid-1;
			}else{
				low = mid + 1;
			}
		}else{
			if(k >= arr[mid] && k <= arr[high]){
				low = mid+1;
			}else{
				high = mid-1;
			}
		}
	}
	return -1;
}


int peek(){
	
}

int main(){
	int n;
	cin>>n;
	int arr[n];

	for(int i= 0 ; i< n ; i++){
		cin>>arr[i];
	}

	// cout<<FindMinFromRotatedArray(arr,n);
	// buble(arr,n);
	// cout<<FindMinFromRotatedArrayDublicate(arr,n);
	// cout<<print(n);
	int k;
	cin>>k;
	cout<<SearchOnRotatedArray(arr,n,k);
}



