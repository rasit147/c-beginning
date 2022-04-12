#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int a,b,x,y;
        cin>>a>>b>>x>>y;
        if (a!=x && a!=y  && b!=x && b!=y)
        {
           cout<<true+true;
        }
        else if(a!=x && a!=y  && b!=x && b!=y && a==x && a==y  && b==x && b==y){
            cout<<true;
        }
        else{
            cout<<false;
        }
        
    }
    
}