#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    // std::cout << "Hello World!\n";
    long long n;
    // cin>>n;
    n=5;
    vector<int> dp(n+1,0);
    dp[0]=1;dp[1]=1;
        for(int i=0;i<n+1;i++)
    cout<<dp[n]<<" ";cout<<endl;
    // cout<<"kk\n";

    for(int i=2;i<=n;i++){
        for(int k=0;k<i;k++){
            dp[i] = dp[i] + dp[i-1-k]*dp[k];
        }
    }
    // for(int i=1;i<n+1;i++)
    cout<<dp[n]<<" ";
}
