#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    // std::cout << "Hello World!\n";
    long long n;
    cin>>n;
    // n=5;
      vector<int> v,dp(n,0);
    for(int i=0;i<n;i++){
        int t;cin>>t;
        v.push_back(t);
    }
  
    dp[0]=0;
    for(int i = 1;i<n;i++){
        for(int j =0;j<i;j++){
            if(j+v[j]>=i){
                dp[i]=dp[j]+1;
                break;
            }
        }
    }
    // for(int i=0;i<n;i++)cout<<dp[i]<<" "; cout<<endl;
    
    cout<<dp[n-1];
}
