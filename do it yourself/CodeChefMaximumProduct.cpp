


#include <bits/stdc++.h>
using namespace std;

int main() {
    // int t;
    // cin >> t;
    // while(t--){
    //     string s;
    //     cin >> s;
    //     int l = s.size(),ans = 0;
        
    //     for(int i=0;i<l;i+=2){
    //         if(s[i]!=s[i+1])ans++;
    //     }
        
    //     cout << ans << '\n';
    // }

    int a[5]={1,2,3,4,5};
    int pos;

    // cin>>pos;
    pos=3;
    for(int i=pos-1 ; i<5 ; i++){
        a[i]=a[i+1];
    }

    for(int j=0 ; j<4 ; j++){
        cout<<a[j]<<" ";
    }


}