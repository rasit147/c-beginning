#include<bits/stdc++.h>
using namespace std;

int count_digit(long n){
    int count=0;
    while (n>0)
    {
      n=n/10;
      count++;
    }
    return count;
    
}
int main(void){
    int long n=123;
    cout<<"Number of digit:"<<count_digit(n);
    return 0;
}

