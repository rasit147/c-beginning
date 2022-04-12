#include<bits/stdc++.h>
using namespace std;

/*int main(){
pair<int,string> p;
p={2,"rashid"};
//cout<<p.first<<p.second;
pair<int,string> &p1=p;  //refrencing p1 to p...
p1.first=7;
cout<<p1.first<<" "<<p1.second<<endl;
int a[]={1,2,3};
int b[]={4,5,6};
pair<int,int> p_array[3];
p_array[0]={1,2};
p_array[1]={2,3};
p_array[2]={3,4};
swap(p_array[0],p_array[2]);
for (int i = 0; i <3; i++)
{
    cout<<p_array[i].first<<" "<<p_array[i].second<<endl;

}

}
void printVec1(vector<int> v){

    for (int i=0;i<v.size();++i){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int> v;
    v.push_back(7);
    v.push_back(6);
    v.pop_back();
    printVec1(v);
    return 0;
}
void printVec1(vector<pair<int,int> > v){
    cout<<"size: "<<v.size()<<endl;
    for(int i=0;i<v.size();++i){
        //v.size()-> O(1)
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
    cout<<endl;
}
int main(){
    vector<pair<int,int> > v; // = {{1,2},{2,3},{4,5}};
    printVec1(v);
    int n;
    cin>>n;
    for(int i=0;i<n;++i){
        int x,y;
        cin>>x>>y;
        v.push_back({x,y});
    }
    printVec1(v);
}*/
void printVec1(vector<pair<int,int> > v){
    cout<<"size: "<<v.size()<<endl;
    for(int i=0;i<v.size();++i){
        //v.size()-> O(1)
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
    cout<<endl;
}
int main(){
    vector<pair<int,int> >v;       //={{1,2},{2,3},{4,5}};
    printVec1(v);
    int n;
    cin>>n;
    for(int i=0;i<n;++i){
        int x,y;
        cin>>x>>y;
        v.push_back({x,y});
    }
    printVec1(v);
}




