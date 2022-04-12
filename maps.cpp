#include<bits/stdc++.h>
using namespace std;


/*void print(map<int,string> &m){
  cout<<m.size()<<endl;
  for(auto &pr: m){
    cout<<pr.first<<endl<<" "<<pr.second<<endl;
  }

}

int main(){
    map<int,string> m;
    m[1]="aman";
    m[4]="amar";
    m[2]="amairah";
    m.insert(make_pair(5,"asif"));
    auto it=m.find(4);
    if (it==m.end()){
      cout<<"NO value";
    }
    else
    {
      cout<<(*it).first<<" "<<(*it).second;
    }
    
    //map<int,string>:: iterator it;
   /* for (it  = m.begin(); it !=  m.end(); ++it)
    {
        cout<<(*it).first<<" "<<(*it).second;
    }*/
    //print(m);
    
//}

//given N string ,print unique strings in lexiographical order....
/*int main(){
  map<string,int> m;
  int n;
  cin>>n;
  for (int i = 0; i < n; ++i)
  {
    string s;
    cin>>s;
    m[s]++;
  }
  for(auto pr: m){
    cout<<pr.first<<" "<<pr.second<<endl;
  }

  
}*/
//given N string and Q queries .
//in each you are given a string print frequency of that string..
int main(){
  unordered_map<string,int> m;
  int n;
  cin>>n;
  for (int i = 0; i < n; ++i)
  {
    string s;
    cin>>s;
    m[s]++;
  }
  int q;
  cin>>q;
  while (q--)
  {
    string s;
    cin>>s;
   cout<<m[s]<<endl;
  }
  
}
