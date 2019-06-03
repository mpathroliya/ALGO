#include <iostream>
#include <vector>
#include <algorithm>
#define  rep(i,a,b)  for(int i = a; i < b; i++)
#define  ll  long long

int main() {
    // std::cout << "Hello World!\n";
    int n;cin>>n;
    vector <int> v,dp;
    
    rep(i,0,n){
        int temp; cin>>temp;
        v.push_back(temp);
        dp.push_back(0);
    }
    dp[0] = 1;
    // bottom up
    
    rep(i,1,n){
        dp[i]=1;
        rep(j,0,i)
        if(v[i]>v[j] &&  dp[j]+1>dp[i]) dp[i] = dp[j] + 1;
        // else dp[i] = dp[i-1];
    }
    
    cout<<dp.back();
    
    
}
