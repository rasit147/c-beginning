#include<bits/stdc++.h>
using namespace std;

//int main(){
   /* array<int, 3> v={1,3,6};
    for (int i = 0; i < 3; i++)
    {
       cout<<v.at(i)<<" ";
    }*/
    
    //array->int arr[100]
    //array<int,5> arr={1,2,3,4,5};
    //for(auto it: arr.begin(); it!=arr.end();it++) {
        //cout<< *it <<" ";
   
    //for(auto it: arr.end()-1; it>=arr.begin();it--)
int main(){
   vector<int> v;
   v.push_back(3);
   v.push_back(4);
   v.push_back(5);
   for (int i = 0; i < v.size(); i++)
   {
      cout<<v[i]<<endl;
   }
   vector<int>:: iterator it;
   for(it = v.begin();it!=v.end(); it++)
   {
      cout<<*it<<endl;
   }
   for (auto element:v)
   {
     cout<<element<<endl;
   }
   vector<int> v2(3,30);
   swap(v,v2);
   for(auto element:v){
      cout<<element<<endl;
   }
   for(auto element:v2){
      cout<<element<<endl;
   }

   
   
   return 0; 
}
        
        
