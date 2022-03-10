

#include<bits/stdc++.h>
#include<string.h>

using namespace std;

void find(string s){

	int found = s.find("pika");
	if(found != std::string::npos) cout<<"found"<<endl;
	else cout<<"not found"<<endl;

	cout<<"this is string present at  position "<<s.find("pika")<<endl;
	
}

void concate(){
	char a[20] = "i love pika";
	char b[20] = " hehe";
	cout<<strcat(a,b)<<endl;

}

void insert(){
	string s1 = "i am dirty minded";
	string s2 = " naaaahh.... i know ... ";
	s1.insert(0,s2);
	cout<<s1<<endl;

}

void erase(){
	string s1 = "yeah yeah";
	s1.erase(0,3);

	cout<<s1<<endl;
}

void erase2(){
	string s1 = "hey that's naruto ";
	string s2 ="hey ";

	string::size_type find = s1.find(s2);

	if (find != string::npos) s1.erase(find,s2.length());
	cout<<s1<<endl;
}

int main(){


	string s="lets play with pikachu";
	find(s);
	concate();
	// char *p = 'pikachu';
	// cout<<strlen(p)<<endl;
	insert();
	erase();
	erase2();


	cout<<endl;

	cout<<"_______________________________________"<<endl;

	




}



    // int found = text.find("some text");
    // if (found != std::string::npos)
    // {
    //     //do stuff if word is there
    // }
    // else
    // {
    //     //do stuff when word isnt there
    // }