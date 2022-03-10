


#include<bits/stdc++.h>
using namespace std;

int fun(int n ){
	if(n > 0){
		cout<<n<<" ";
		fun(n-1);
	}
}
int fun2(int n ){
	if(n > 0){
		fun2(n-1);
		cout<<n<<" ";
	}
}
int tree_recursion(int n){


	if (n > 0){
		cout<<n<<" ";
		tree_recursion(n-1);
		tree_recursion(n-1);

	}
}
int indirect_recursionB(int n);
//this is proto type of function B cause we are using functionA then B


int indirect_recursionA(int n){
	if(n > 0){
		cout<<n<<" ";
		indirect_recursionB(n-1);
	}
}
int indirect_recursionB(int n){
	if(n>1){
		cout<<n<<" ";
	}indirect_recursionA(n/2);
}
int main(){
	int n = 5;
	fun(5);
	cout<<endl;
	fun2(5);
	cout<<endl;
	tree_recursion(3);
	cout<<endl;
	indirect_recursionA(20);
	return 0;
}








