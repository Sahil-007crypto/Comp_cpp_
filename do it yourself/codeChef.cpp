

#include<bits/stdc++.h>
using namespace std;


int rev(int n){
	int rem,rev=0 , temp = n;
	while(n != 0){
		rem = n % 10;
		rev = rev *10 + rem;
		n /= 10;
	}
	return rev;
}

// int revans(int r){
// 	int rem,rev=0; 
// 	while(r != 0){
// 		rem= r%10;
// 		rev = rev*10 + rem;
// 		r/= 10;
// 	}
// 	cout<<rev<<endl;
// }

int main(){

	int t,a,b;
	cin>>t;

	while(t--){
		cin>>a>>b;
		// cout<<rev(a)+rev(b)<<endl;
		int sum= rev(a)+rev(b);
		cout<<rev(sum)<<endl;
	}
	
}

 // while(n != 0) {
 //        remainder = n%10;
 //        reversedNumber = reversedNumber*10 + remainder;
 //        n /= 10;
 //    }



