#include<bits/stdc++.h> 
using namespace std;

#define int long long 
#define nl "\n"
const int M=1e5 + 5;
typedef vector<int> vi;
#define f(i,a,n) for(int i=a;i<n;i++)
#define rf(i,a,n) for(int i=n-1;i>=a;i--)
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cin.tie(0);cout.tie(0);
#define read(arr,n) for(int i=0;i<n;i++)cin>>arr[i];
#define pr(arr,n) for(int i=0;i<n;i++)cout<<arr[i];
#define in cin>>
#define out cout<<
#define first fr
#define second sc

void solve(){
 int x,y,p,q; 
 cin>>x>>y>>p>>q;
    int chef = x+(10*p);
    int chefina = y+(10*q);
    
    if(chef<chefina){
        out "Chef"<<nl; return;}
    else if(chef>chefina){
        out "Chefina"<<nl; return;}
    else  if(chef == chefina){
        out "Draw"<<nl; return;}
}


int32_t main(){
    FIO int t; t=1;
    in t;
    while(t--) solve();
  
return 0;
}