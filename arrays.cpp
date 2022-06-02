#include<bits/stdc++.h>
using namespace std;

/*int main(){
    int mx=-19999;
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for (int i = 0; i < n; i++)
    {
      mx=max(mx,a[i]);
      cout<<mx<<" ";
    }   
}
//subarray---"continous part of the array."

//subsequence---a subsequence is a sequence that can be derived an array by selecting zero or more elements,without changing the order of the remaining elements.
int main(){
  int m;
  cin>>m;

  int arr[m];
  for (int i = 0; i < m; i++)
  {
    cin>>arr[i];
  }

  int curr=0;

  for (int i = 0; i < m; i++)
  {
    curr=0;
    for (int j=i; j < m; j++)
    {
     curr+=arr[j];
     cout<<curr<<endl;
    }
    
  }
  return 0;

}
//kickstart

int main(){
  int n;
  cin>>n;
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    cin>>arr[i];
  }
  int ans=2;
  int pd=arr[1]-arr[0];
  int j=2;
  int curr=2;
  while (j<n)
  {
   if (pd==arr[j]-arr[j-1])
   {
    curr++;
   }
   else
   {
     pd=arr[j]-arr[j-1];
     curr=2;
   }
   ans=max(ans,curr);
   j++;
  }
  

cout<<ans<<endl;
return 0;

}*/



