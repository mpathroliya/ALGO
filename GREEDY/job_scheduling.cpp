#include <iostream>
#include<bits/stdc++.h>p
using namespace std;
#define  rep(i,a,b) for(auto i=a;i<b;i++)
#define  ll long long
#define  pb push_back

class Job{
    public:
        char id;
        int deadline, profit;
    // Job(char c, int x, int y){
    //     char id =c;
    //     int deadline =  x;
    //     int profit = y;
    // }
};

bool compare(Job x, Job y){
    return(x.profit>y.profit);
}

int main() {
    int n;cin>>n;
     Job temp;
    // vector <Job> v;
    Job job[n];
    rep(i,0,n){
        char c; int x, y; cin>> c >> x >>y;
        // temp.id = c;  temp.deadline = x; temp.profit = y;
        // v.pb(temp);
        job[i].id = c;  job[i].deadline = x; job[i].profit = y;
    }
    vector<char> result(n); bool check[n];
    rep(i,0,n) check[i]=false;
    
    sort(job ,job + n, compare);
    
//     rep(i,0,n){
//         cout<<v[i].id<<" "<<v[i].deadline<<" "<<v[i].profit<<endl;
//     }
    rep(i,0,n){
        for(int  j=min(n, job[i].deadline)-1;j>=0;j--){
            if(!check[j]){
                result[j] =(job[i].id);
                check[j]=true;
                break;
            }
        }
    }
    // cout<<"sadasd"   << result.size();
    rep(i,0,result.size()) cout<<result[i]<<" "; cout<<endl;
    // cout<<"asdfs";
    

    
    
    
}
