/*
5
15 28
39 60
5 24
50 90
27 40
*/



#include<bits/stdc++.h>
using namespace std;

bool comp(pair<int,int>x,pair<int,int>y){
    return x.first < y.first;
}

int main(){
    int n; cin>>n;
    
    vector<pair<int,int>> v;
    for(int i=0;i<n;i++){
        int x,y; cin>>x>>y;
        v.push_back(make_pair(x,y));
    }
    
    sort(v.begin(),v.end(),comp);
    // for(int i=0;i<n;i++){
    //     pair<int,int> x = v[i];
    //     cout<<x.first<<":"<<x.second<<" ";
    // }
    // cout<<endl;
    
    vector<int> dp(n,1);
    
    for(int i=1;i<n;i++){
        pair<int,int>x,y;
        x=v[i];
        for(int j=0;j<i;j++){
            y=v[j];
            if(y.second<x.first && dp[i]<dp[j]+1) dp[i]=dp[j]+1;
        }
    }
    
    // for(int i=0;i<n;i++) cout<<dp[i]<<" ";cout<<endl;
    cout<<dp[n-1];
    
}
