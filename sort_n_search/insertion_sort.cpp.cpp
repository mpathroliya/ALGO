#include <iostream>
#include<vector>
#define  ll long long
#define  mp make_pair
#define  rep(i,a,b) for(int i =a;i<b;i++)
#define  pb push_back
using namespace std;
int main() {
    int n;cin>>n;
    vector<int>v;
    rep(i,0,n){
        int t;cin>>t;
        v.pb(t);
    }
    
    rep(i,1,n){
        int k = i;
        while(k>0 && v[k]<v[k-1]){
            int temp = v[k];
            v[k]=v[k-1];
            v[k-1]=temp;
            k--;
        }
    }
    
    rep(i,0,n) cout<<v[i]<<" ";

    
    
    /* std::cout << "Hello World!\n"; */
}