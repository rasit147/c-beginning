#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
    multiset<long long> s;
    int n,k;
    cin>>n>>k;
    for(long long i=0;i<n;++i){
        long long candy_ct;
        cin>>candy_ct;
        s.insert(candy_ct);
    }
    long long total_candies=0;
    for(long long i=0;i<k;++i){
        auto last_it=(--s.end());
        long long candy_ct=(*last_it);
        total_candies+=candy_ct;
        s.erase(last_it);
        s.insert(candy_ct/2);
        cout<<total_candies<<endl;

    }

 }

}


