#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {

    int n;cin>>n;
    vector <int> v(n+1);
    for(int i=0; i<=n;i++){
        if(i<2) v[i]=i;
        else v[i] = v[i-1] + v[i-2];
    }
    
    cout<<v.back();
    
}