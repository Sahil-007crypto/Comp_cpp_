


#include<bits/stdc++.h>
using namespace std;
int main(){

	
	int n;
	cin>>n;

	int a[n];

		
	// for(int i=0 ; i< n ; i++){
	// 	cin>>a[i];
	// }

	// int temp=a[n-1];
	// for(int i=n-1; i>0 ; i--){
	// 	a[i] = a[i-1];
	// }
	// a[0] = temp;

	// for(int i=0 ; i< n ; i++){
	// 	cout<<a[i]<<" ";
	// }

	vector<int >v;
	for(int i= 0 ; i< n ; i++){
		int temp=0;
		cin>>temp;
		v.push_back(temp);
	}
	cout<<"before sorting the element"<<endl;
	for(int x:v){
		cout<<x<<" ";
	}
	cout<<endl;

	sort(v.begin(),v.end());
	cout<<"after sorting the element"<<endl;
	for(int x:v){
		cout<<x<<" ";
	}
	cout<<endl;

	rotate(v.begin(),v.begin()+1,v.end());

	cout<<"after rotate in vector"<<endl;

	for(int x:v){
		cout<<x<<" ";
	}

	

}


