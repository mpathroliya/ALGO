#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define pb push_back

bool isPrime(int n) 
{ 
    // Corner cases 
    if (n <= 1)  return false; 
    if (n <= 3)  return true; 
  
    // This is checked so that we can skip  
    // middle five numbers in below loop 
    if (n%2 == 0 || n%3 == 0) return false; 
  
    for (int i=5; i*i<=n; i=i+6) 
        if (n%i == 0 || n%(i+2) == 0) 
           return false; 
  
    return true; 
} 

int main() {
    int n;cin>>n;
    vector<int> v;
    rep(i,0,n){
        int temp;cin>>temp;
        v.pb(temp);
    }
    int ones=0,twos=0;
    rep(i,0,n){
        if(v[i]==1) ones++;
        else twos++;
    }
    
    // cout<<ones<<" "<<twos<<endl;
    int sum=0;

    // rep(i,0,n) cout<<v[i]<<" "; cout<<endl;
    if(ones){
        sum+=1;

        ones--;
    }
    cout<<1<<" ";
    // cout<<"ones = "<<ones<<", twos = "<<twos<<endl;
    // v.pb(1);
    // cout<<"v.size() = "<<v.size()<<endl;
            // rep(i,0,n) cout<<v[i]<<" "; cout<<endl<<endl;

    while(ones || twos){
        if(ones && twos){
            if(isPrime(sum+1)){
                sum+=1;
                ones--;
                cout<<1<<" ";
            }
            else if(isPrime(sum+2)){
                sum+=2;
                twos--;
                cout<<2<<" ";
            }
            else{
                sum+=1;
                ones--;
                cout<<1<<" ";
            }
            
        }
        else if(ones){
            sum+=1;ones--;
            cout<<1<<" ";
        }
        else if(twos){
            sum+=2;twos--;
            cout<<2<<" ";
        }
        // cout<<"ones = "<<ones<<", twos = "<<twos<<endl;
        // rep(i,0,n) cout<<v[i]<<" "; cout<<endl;
    }
    
    // rep(i,0,n) cout<<v[i]<<" ";
    
    
}