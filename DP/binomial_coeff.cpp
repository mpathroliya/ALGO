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
    
    int n,k; cin>>n>>k;
    int arr[n][k+1];
    
    for(int i=0;i<n;i++){
        for(int j=0;j<=k;j++){
            if(j==0 || j == i+1) arr[i][j] = 1;
            else if(j==1 || j==i) arr[i][j] = i+1;
            else if(i+1<k) arr[i][j] = -1;
            else arr[i][j] = arr[i-1][j-1] + arr[i-1][j];
        }
    }
    cout<<arr[n-1][k];
}
