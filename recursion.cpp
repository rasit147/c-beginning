/*#include<iostream>
using namespace std;
void fun(int n){
    if (n==0)
    {
        return ;
    }
    cout<<n<<endl;
    fun(n-1);
    
}
int main(){
    fun(3);
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

int fun(int n){
    if (n==1){
    return 0;
    }
    else
    return(1+fun(n/2));
}
int main(){
    fun(16);
}
#include<bits/stdc++.h>
using namespace std;
int fun(int n){
    if(n==6)
    return 0;
    fun(n+1);
    cout<<n<<endl;  //output is:54321
}
int main(){
    fun(1);
}
#include<bits/stdc++.h>
using namespace std;
int print1toN(int n){
    if(n==0)
    return 0;
    print1toN(n-1);
    cout<<n<<" ";
}
int main(){
int n=5;
print1toN(n);
}*/
#include<bits/stdc++.h>
using namespace std;

int fact(int a){
    if((a==0)||(a==1))
    return 1;
    else
    return a*fact(a-1);
}

int main(){
    int a=4;
    fact(a);
    cout<<a<<" ";
    return 0;
}




