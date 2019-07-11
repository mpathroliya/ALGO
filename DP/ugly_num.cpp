#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    
    int dp[n];
    dp[0]=1;
    int it2=0,it3=0,it5=0,next2 = 2, next3=3, next5=5,next;
    
    for(int i=1;i<n;i++){
        next = min(next2,min(next3,next5));
        dp[i] = next;
        
        if(next == next2){
            it2++;
            next2 = dp[it2]*2;
        }
        if(next == next3){
            it3++;
            next3 = dp[it3]*3;
        }
        if(next == next5){
            it5++;
            next5 = dp[it5]*5;
        }
        
    }
    // for(int i=0;i<n;i++)cout<<dp[i]<<" ";
    cout<<dp[n-1];
}
