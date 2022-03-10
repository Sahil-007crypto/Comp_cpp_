
#include<bits/stdc++.h>
using namespace std;

int MaxSumSubArray(int arr[] ){
	int maxsum=arr[0];
	int current = 0; 

	for(int i=0; i< 5 ; i++){
		current = current + arr[i];

		if(current > maxsum){
			maxsum = current;
		}
		if(current < 0){
			current=0;
		}
	}
	return maxsum;
}


int Max(vector<int> v){
	int sum = 0 ; 
	int maxi = v[0];
	for(auto it:v){
		sum+= it;
		maxi= max(sum,maxi);
		if(sum < 0) sum=0;
	}
	return maxi;
}



int main(){
	int n;
	cin>>n;

	// this is for vector okay...
	vector<int> arr;
	for(int i=0 ; i< n ; i++){
		int temp=0;
		cin>>temp;
		arr.push_back(temp);
	}

// this is for normal 
	// int a[] = {1,2,3,-2,5} ;
	// for(int i=0 ; i< n ; i++){
	// 	cin>>a[i];
	// } 
	// cout<<MaxSumSubArray(a)<<endl;
	cout<<Max(arr);

}



