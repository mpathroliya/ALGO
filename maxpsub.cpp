long long sumv(int i, int j, vector<int>v){
    long long sum=0;
    for(int x =i; x <=j;x++){
        sum += v[x];
    }
    return sum;
}
vector<int> arr(vector<int> v, /*pair<long long,pair<int,int>> p*/ int i, int j){
    vector<int>temp;
    // pair<int,int> pl;
    // int i=pl.first,j=pl.second;
    // cout<<i<<" "<<j<<endl;
    for(int k = i;k<=j;k++) temp.push_back(v[k]);
    return temp;
    
}
bool comp1(pair<long long,pair<int,int>>p1 , pair<long long,pair<int,int>> p2){
    int i1=p1.second.first,j1=p1.second.second;
    int i2=p2.second.first,j2=p2.second.second;
    return (j1-i1)>(j2-i2);
}

bool comp2(pair<long long,pair<int,int>>p1 , pair<long long,pair<int,int>> p2){
    int i1=p1.second.first;
    int i2=p2.second.first;
    return i1<i2;
}

vector<int> Solution::maxset(vector<int> &A) {
    
    vector<int> neg(1);
    int n = A.size();
    neg[0]=-1;
    // for(int i =0;i<n;i++) cout<<neg[i]<<" "; cout<<endl;
    
    for(int i=0;i<n;i++){
        if(A[i]<0) neg.push_back(i);
        // for(int i =0;i<n;i++) cout<<neg[i]<<" "; cout<<endl;
    }
    
    neg.push_back(n);
    // for(int i =0;i<n;i++) cout<<neg[i]<<" "; cout<<endl;
    
    // sort(neg.begin(),neg.end());
    // int s1 = neg[0],s2 = neg.back();
    vector < pair<long long,pair<int,int>> > s;
    int c1,c2;
    for(int j =0;j<neg.size()-1;j++){
        pair<long long,pair<int,int>> pl;
        pair<int,int>pr;
        c1 = neg[j],c2=neg[j+1];
        // cout<<c1<<" "<<c2<<endl;
        long long x = sumv(c1+1,c2-1,A);
        if(s.size()==0){
            s.push_back(make_pair(x,make_pair(c1+1,c2-1)));
            continue;
        }
        pl=s.back();
        
            
        if(x<pl.first){ continue;}
        
        if(x>pl.first) s.pop_back();
        s.push_back(make_pair(x,make_pair(c1+1,c2-1)));
        // cout<<"from "<<c1+1<<" to "<<c2-1<<endl;

        
        // for(int l=0;l<s.size();l++){
        //     pl=s[l];
        //     pr = pl.second;
            
        //     cout<<"{"<<pl.first<<","<<pr.first<<","<<pr.second<<"} ";
        // }
        // // cout<<pl.first;
        // cout<<endl;
    }
    int temp;
    pair<long long,pair<int,int>> pl;
    pair<int,int>pr;
    if(s.size()==1){
        // cout<<"one shot\n";
        
        // for(int l=0;l<s.size();l++){
        //     pl=s[l];
        //     pr = pl.second;
            
        //     cout<<"{"<<pl.first<<","<<pr.first<<","<<pr.second<<"} ";
        // }
        // cout<<pl.first;
        pl=s[0];
        pr = pl.second;
        cout<<endl;
        return arr(A,pr.first,pr.second);
    }
    
    else{
        sort(s.begin(),s.end(),comp1);
        pl=s[0];
        pr = pl.second;
        temp = pr.second-pr.first;
    }
    while(true){
        
        pl=s.back();
        pr = pl.second;
        if(pr.second-pr.first==temp) break;
        s.pop_back();
    }
    
    if(s.size()==1){
        // cout<<"2 shot\n";
        pl=s[0];
        pr = pl.second;
        // cout<<endl;
        return arr(A,pr.first,pr.second);
    }
    else{
        sort(s.begin(),s.end(),comp2);
    }
    // cout<<"3 shot\n";
    pl=s[0];
        pr = pl.second;
        cout<<endl;
        return arr(A,pr.first,pr.second);

}
