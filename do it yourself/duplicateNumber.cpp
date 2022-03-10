



#include<bits/stdc++.h>

using namespace std;

int main(){
	int n; 
	cin>>n;

	std::vector<int > v(n);

	for(auto &i : v){
		cin>>i;
	}

	// int count=1;
	sort(v.begin() , v.end());
	for(int i=0 ; i< n ;i++){
		if(v[i] == v[i+1]){
			// cout<<v[i]<<" ";
			// count++;
			cout<<"found array element "<<v[i]<<endl;
			continue;
		}
	}

	// if(count == 2){
	// 	cout<<" found "<<endl;
	// }else cout<<"not found "<<endl;
}






