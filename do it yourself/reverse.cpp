

#include<iostream>
#include<bits/stdc++.h>

// C++ code to demonstrate working of lexical_cast()
// #include <boost/lexical_cast.hpp>

using namespace std;

// int reverse(vector<int > v , int start , int end){

// 	vector<int> result;

// 	while(start < end){
// 		int temp=0;
// 		temp = v[start];
// 		v[start] = v[end];
// 		v[end] = temp;
// 		start++;
// 		end--;
// 	}

// 	for(int x:v){
// 		cout<<x<<" ";
// 	}


// }

// int printARR(vector<int> v){
// 	for(int x:v){
// 		cout<<x<<" ";
// 	}
// }

// int main(){

// 	int t=0;
// 	int n;
// 	cin>>n;
// 	vector<int > v;
// 	for(int i=0; i< n ; i++ ){
// 		cin>>t;
// 		v.push_back(t);
// 	}

// 	cout<<"reverse element"<<endl;
// 	reverse(v,0,n-1);

// 	// printARR(v);

// }


int main(){

	int n;
	vector<string> v;
	string a,b;
	
	cin>>a>>b;
	
	reverse(a.begin(),a.end());
	reverse(b.begin(),b.end());

	 int i_value = stoi(a);
	 int j_value = stoi(a);

	 int sum=0;
	 sum= i_value+j_value;

	 // reverse(sum.begin(),sum.end());

	 cout<<sum;
	
}




















