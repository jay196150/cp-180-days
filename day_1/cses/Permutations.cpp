#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n ;
    cin>>n;

    if( n == 1 ){
        cout<<1;
        return 0;
    }

    if( n < 4 ){
        cout<<"NO SOLUTION";
        return 0;
    }

    if( n & 1 ){
       
       for( int i = 2 ; i <= n-1 ;i = i +2 ){
        cout<<i<<" ";
       }

       for( int i = 1 ; i <= n ; i = i + 2 ){
        cout<<i<<" ";
       }

    }else{

        for( int i = 2 ; i <= n ;i = i +2 ){
        cout<<i<<" ";
       }

       for( int i = 1 ; i <= n-1 ; i = i + 2 ){
        cout<<i<<" ";
       }

    }

    return 0;
}