

#include<bits/stdc++.h>

using namespace std;

const int inf= 1e9;


int main(){

	int n;
	cin>>n;
	vector<int > arr(n);

	for(auto &i : arr){
		cin>>i;
	}
	vector<int> jump(n,inf);

	if(arr[0] == 0){
		cout<<inf<<" ";
		return 0;

	}

	jump[0] = 0;
	for(int i=0 ; i< n ; i++){
		for(int j=0 ; j< i ; j++){
			if(i <=(j+ arr[j])){
				jump[i] = min(jump[i],jump[j]+1);
			}
		}
	}
	cout<<jump[n-1]<<endl;
}




