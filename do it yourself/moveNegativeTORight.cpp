
#include <bits/stdc++.h>
using namespace std;

int rightswap(int arr[] , int n){
	int temp=0;
	for(int i=0 ; i< n ; i++){
		if(arr[i] < 0){
			if(i != temp)
				swap(arr[i] , arr[temp]);
			temp++;
		}
	}

}

int printArr(int arr[], int n){
	for(int i=0 ; i< n ; i++){
		cout<<arr[i]<<" ";
	}
}

int main(){

	int n;
	cin>>n;

	int arr[n];

	for(int i=0 ; i< n ; i++){
		cin>>arr[i];
	}

	rightswap(arr,n);
	cout<<"printing the element"<<endl;
	printArr(arr,n);





}

