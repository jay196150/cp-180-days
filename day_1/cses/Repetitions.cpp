#include<bits/stdc++.h>
using namespace std;

int main(){
     
    string s;
    cin>>s;

    int count = 1;
    char ch = s[0];
    int ans = 0;
    int n = s.length();

    for(int i = 1 ; i < n ; i++){
        if( s[i] == ch ){
            count++;
        }
        else{
            ans = max( ans , count );
            count = 1;
            ch = s[i];
        }
    } 

    ans = max( ans, count );

    cout<<ans;
    return 0;
}