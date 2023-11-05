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
  vector<ll>a(n), b(n);
  ll mna=INT_MAX, mnb=INT_MAX;
  ll suma = 0, sumb=0;
  for(auto &x:a){
    cin>>x;
    suma+=x;
    if(x<mna)mna=x;
  }
  for(auto &x:b){
    cin>>x;
    sumb+=x;
    if(x<mnb)mnb=x;
  }
  suma+=mnb*n;
  sumb+=mna*n;
  ll sum=0;
  (suma<sumb)?cout<<suma:cout<<sumb;
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
