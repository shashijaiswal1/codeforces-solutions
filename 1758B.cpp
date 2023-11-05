#include<bits/stdc++.h>
using namespace std;

#define ll long long 

void print(vector<ll>a){
  for(auto &x:a){
    cout<<x<<' ';
  }
  cout<<endl;
}

void solve(){
  int n;
  cin>>n;
  if(n & 1){
    for(int i=0;i<n;++i){
      cout<<1<<' ';
    }
  }
  else{
    cout<<1<<' '<<3<<' ';
    for(int i=0;i<n-2;++i){
      cout<<2<<' ';
    }
  }
  cout<<endl;
}


int main(){
 
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
 
  int t;
  cin>>t;
  while(t--){
    solve();
  }
 return 0;
}
