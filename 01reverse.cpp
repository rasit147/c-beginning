
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    string s_rev;
    for (int i = s.size()-1; i >=0; --i)
    {
        s_rev.push_back(s[i]);

    }
    cout<<s_rev<<endl;
    if (s_rev==s)
    {
        cout<<"string is palindrome";
    }
    else{
        cout<<"string is not palindrome";
    }
    

}