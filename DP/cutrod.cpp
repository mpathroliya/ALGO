#include <bits/stdc++.h>
using namespace std;
int cutrod(vector<int>&v, int n){
    if(n<=0) return 0;
    int maxi =INT_MIN;
    for(int i=1;i<=n;i++){
        maxi = max(maxi, v[i-1] + cutrod(v,n-i));        
    }
    return maxi;
}

int main() {
    // std::cout << "Hello World!\n";
    vector<int> v;
    int n=8;
    for(int i=0;i<n;i++){
        int t;cin>>t;
        v.push_back(t);
    }
    cout<<cutrod(v,n)<<endl;;
    
       int dp[n+1];
    dp[0] = 0;
    
    for(int i=1;i<=n;i++){
        dp[i]=INT_MIN;
        for(int j=1;j<=i;j++){
            dp[i] = max(dp[i],v[j-1]+dp[i-j]);
        }
    }
    
    cout<<dp[n];
    
}
    
