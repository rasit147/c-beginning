#include<bits/stdc++.h>
using namespace std;


/*int main(){ 
     vector<int>  v ={2,3,5,6,7};
    for(int i=0;i<v.size();++i){
        //v.size()-> O(1)
        cout<<v[i]<<" ";
    }
    cout<<endl;
    vector<int> ::iterator it=v.begin();
    for(it=v.begin();it!=v.end();++it){
        cout<<(*it)<<endl;
    }

}*/
/*int main(){
    vector<int>  v ={2,3,5,6,7};
    for(int i=0;i<v.size();++i){
        //v.size()-> O(1)
        cout<<v[i]<<" ";
    }
    cout<<endl;
    vector<pair<int,int>>v_p = {{1,2},{2,3},{4,5}};
    vector<pair<int,int>> :: iterator it;
    for(it = v_p.begin(); it!=v_p.end(); ++it){
        cout<<(*it).first<<" "<<(*it).second<<endl;
    }
    

}*/
// after c++11 launch new tricks and steps added...
//rangebase loop and auto keyword
/*int main(){
    vector<int>  v ={2,3,5,6,7};
    for(int i=0;i<v.size();++i){
        //v.size()-> O(1)
        cout<<v[i]<<" ";
    }
    cout<<endl;
    for(int &value : v)
    value--;
   // cout<<value<<" ";
    for(int value : v)
    cout<<value<<" ";

}*/
int main(){
    vector<pair<int,int>> v_p={{1,2},{2,3}};
    for(auto value:v_p){
        cout<<value.first<<" "<<value.second<<endl;
    }
    auto a=12.00;
    cout<<a<<endl;
}