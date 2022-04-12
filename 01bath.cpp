/*#include <iostream>
using namespace std;
int digit_sum(int n) {
    int digit_sum=0;
    while (n){
        digit_sum=digit_sum+n%10;
        n=n/10;
    }
 return digit_sum;
}

int main(){
    int a,b;
    cin>>a>>b;
    cout<<digit_sum(a)+digit_sum(b);
    
    
}
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string S[5],T[5],M[5];
        if(S[1]!=T[1]){
           
        }
	return 0;
}
*/
#include <bits/stdc++.h>
using namespace std;

void display(vector<int> &v){
    for (int i = 0; i < v.size(); i++)
    {
       cout<<v[i]<<" ";
    }
   
}
int main(){
    vector<int> vec1;
    int element;
    int size;
    cout<<"enter the size of vector";
    cin>>size;

    for (int  i = 0; i <size; i++)
    {
        cout<<"Enter the element to add this vector";
        cin>>element;
        vec1.push_back(element);
    }
   // vec1.pop_back();

    display(vec1);
    vector<int>::iterator iter=vec1.begin();
    vec1.insert(iter,566);
    display(vec1);
return 0;

}


