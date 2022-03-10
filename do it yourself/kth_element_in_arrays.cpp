
#include<bits/stdc++.h>

using namespace std;
int Element_find(vector<int> v, int n,int k){
	sort(v.begin(),v.end());
	return v[k-1];

}

int main(){

	int n;
	cin>>n;
	int temp=0;

	vector<int> v;
	for(int i=0 ; i< n; i++){
		cin>>temp;
		v.push_back(temp);
	}
	int k=3;
	cin>>k;
	cout<<"the kth element is "<<Element_find(v,n,k);

	// sort(v.begin() , v.end());

	// for(int x:v){
	// 	cout<<x<<" ";
	// }
	// cout<<endl;

	// cout<<v[k-1];

}




