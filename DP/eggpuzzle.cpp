#include<bits/stdc++.h>
#define  ll long long
#define  rep(i,a,b)  for(int i=a; i<b;i++)
#define  pb  push_back

using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        int n,k;cin>>k>>n;
        
        int arr[n+1][k+1];
        rep(i,0,k+1) { arr[0][i]=0; arr[1][i]=1;}
        rep(i,0,n+1) { arr[i][0]=0; arr[i][1]=i;}
       
        // rep(i,0,n+1) 
    
        
        rep(i,2,n+1){
            rep(j,2,k+1){
                arr[i][j]=1000;
                rep(f,1,i+1){
                    int curr = 1 + max(arr[f-1][j-1],arr[i-f][j]);
                    // cout<<curr<<" "<<(arr[i][j])<<endl;
                    arr[i][j]  = min(arr[i][j],curr);
                    
                }
                // cout<<endl;
            }
        }
        // cout<<endl;
        // rep(i,0,n+1){
        //     rep(j,0,k+1) cout<<arr[i][j]<<" ";
        //     cout<<endl;
        // }cout<<endl;
        cout<<arr[n][k]<<endl;
            
    }
    // is not that right;
 
    
}
