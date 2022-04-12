#include<iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int p,q,r,s;
	    cin>>p>>q>>r>>s;
	    int a,b;
	    if((a-b)==p && (a+b)==q  && (a/b)==r && (a*b)==s){
	        cout<<a<<" "<<b;
	    }
	}
	return 0;
}