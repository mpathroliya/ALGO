#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;cin>>n;
        set<int>::iterator i;
    vector<int> s,f;
    
    for(auto i=0;i<n;i++){
        int x;cin>>x;
        s.push_back(x);
    }
    
    
    for(auto i=0;i<n;i++){
        int x;cin>>x;
        f.push_back(x);
    }
    
    int count=0;
    set<int> ans;
    
    for(auto i=0;i<n;i++){
        if(i==0){
            ans.insert(i);
            count++;
            continue;
        }
        if(s[i]>=f[i-1]){
            count++;
            ans.insert(i);
        }
    }
    
    cout<<"no. of activities = "<<count<<endl;
    for(auto i=ans.begin();i!=ans.end();i++){
        cout<<s[*i]<<","<<f[*i]<<" ";
    }
    
    
    
    
}
