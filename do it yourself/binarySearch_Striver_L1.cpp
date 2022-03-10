

#include<bits/stdc++.h>

using namespace std;

int find( int arr[] , int n , int x){

	int low = 0 , high =n-1;
	while(low <= high){
		int mid = (low + high)/2;
		//if middle element is our x
		if(arr[mid] == x){
			return mid;
		}
		// it never lies on left half
		if(x > arr[mid]){
			low = mid+1;
		}
		// it never lies on right half
		else{
			high = mid-1;
		}
	}
	return -1;
}

int FirstOccurance(int arr[] , int n , int x){

	int low =0 , high = n-1 ;
	int ans = -1;
	while( low <= high){
		int mid = (low + high)/2;

		// if found then find in left again....
		// thoda left our jayengeee.... for first occurance 
		if(arr[mid] == x){
			ans = mid;
			high = mid -1;
			continue;
			
		}
		if(arr[mid] < x){
			low = mid +1;
		}
		else{
			high = mid -1;
		}
	}
	return ans;
}

int LastOccurance(int arr[] , int n , int x){

	int low =0 , high = n-1 ;
	int ans = -1;
	while( low <= high){
		int mid = (low + high)/2;

		// if found then find in left again....
		// thoda left our jayengeee.... for first occurance 
		if(arr[mid] == x){
			ans = mid;
			low = mid +1;
			continue;
		}
		if(arr[mid] < x){
			low = mid +1;
		}
		else{
			high = mid -1;
		}
	}
	return ans;
}
//this gives index for lowerbound 
// lower bound is >= 
int lowerBound(int arr[] , int n , int x){
	int ans = n;
	int low = 0 , high = n-1;

	while(low <= high){
		int mid=(low+high)/2;
		if(arr[mid] >= x){
			ans=mid;
			high = mid -1;
		}
		else{
			low=mid+1;

		}
	}
	return ans;

}
//this is inbuid function in STL 
// arr[0] it shows the first iterator....
// arr+n this is the last iterator .... also those are the ranges 
// like 0 ----- n-1 

int Inbuid_Fun(int arr[] , int n , int k){
	int lb = lower_bound(arr+0 , arr+n , k)- arr;
}

// upper bound is first number > x 
// x -> number which we are finding upperbound

int upper_bound(int arr[] , int n , int x){
	int ans=n;
	int low = 0;
	int high = n-1;

	while(low <= high){
		int mid = (low + high)/2;
		if(arr[mid] <= x){
			low = mid+1;
		}else{
			ans=mid;
			high = mid - 1;
		}
	}
	return ans;

}

int find( int arr, int n , int x){
	
}

int main(){

	int n;
	cin>>n;
	int arr[n];

	for(int i=0 ; i < n ; i++){
		cin>>arr[i];
	}
	int x;
	cin>>x;
		
	//cout<<find(arr, n , x);
	cout<<FirstOccurance(arr,n,x);
	// cout<<LastOccurance(arr,n,x);
	// cout<<lowerBound(arr,n,x);
	// cout<<Inbuid_Fun(arr,n,x);
	// cout<<upper_bound(arr,n,x);

	// question
	// find the occurance of x;



	cout<<endl;
}






