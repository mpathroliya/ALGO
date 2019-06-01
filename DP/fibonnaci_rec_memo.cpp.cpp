#include <iostream>
#include<bits/stdc++.h>
using namespace std;



int fib(int n,vector<int> memo){
    if(memo.size()>=n+1)
        return memo[n];
    else{
        return fib(n-1,memo)+fib(n-2,memo);
    }
}

int main() {

    vector <int> memo;

    memo.push_back(0);
    memo.push_back(1);

    int n; cin>>n;

    cout<<fib(n,memo);
    
}