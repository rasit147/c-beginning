#include<bits/stdc++.h>
using namespace std;

void print(set<string> &s){
    for(string value: s){
        cout<<value<<endl;
    }
    for (auto it = s.begin(); it!= s.end(); it++)
    {
       cout<<(*it)<<endl;
    }
    
}


int main(){
    set<string> s;
    s.insert("abc");
    s.insert("zfg");
    s.insert("def");
    auto it=s.find("abc");
    print(s);


}