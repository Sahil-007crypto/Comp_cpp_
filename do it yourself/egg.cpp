#include<bits/stdc++.h>
using namespace std;

int main()
{

int t;
	cin>>t;

	while(t--){

		int a,b,n;
		cin>>a>>b>>n;
		for(int i=0; i<n; i++){
		
			a=a+(int)pow(2,i)*b;
			cout<<a<<" ";
		}
		cout<<endl;
	}

return 0;
}

