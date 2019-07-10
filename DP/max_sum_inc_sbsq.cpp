#include <bits/stdc++.h>
using namespace std;

int nck(int n, int k){
    if(n<k) return -1;
    if(k==0 || k==n) return 1;
    if(k==1 || k==n-1) return n;
    return nck(n-1,k) + nck(n-1,k-1);
}
int main() {
    // std::cout << "Hello World!\n";
    // cout<<nck(5,2);
    
    int n; cin>>n;
    vector<int> v,sum;
    for(int  i=0;i<n;i++){
        int x; cin>>x;
        v.push_back(x);
    }
    sum=v;
    int m=v[0];
    for(int i=1;i<n;i++){
        for(int j=0;j<i;j++){
            if(v[i]>=v[j])
            sum[i]=max(sum[i], sum[j]+v[i]); 
        }
        m = max(m,sum[i]);
    }
    
    // for(int i=0;i<n;i++) cout<<sum[i]<<" ";cout<<endl;
    
    cout<< m;
    
}
