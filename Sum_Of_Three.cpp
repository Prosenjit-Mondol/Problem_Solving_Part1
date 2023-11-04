#include<bits/stdc++.h>
#include<tuple>
#include<utility>
#include<algorithm>
#define vi vector<int>v
#define pi pair<int,int>
using namespace std;
using ll=long long ;

void solve(void)
{
    ll n,j=0,k=0;
    cin>>n;
    bool pos = false;
for(int i=2;i<=n;i++){
    if((n-1-i)%3!=0&&i%3!=0&&(n-1-i)!=1&&
       (n-i-1)!=i&&(n-1-i)>0){
        pos=true;
        cout<<"Yes"<<endl;
        cout<<1<<" "<<i<<" "<<(n-1-i)<<endl;
        break;
       }
}
if(!pos){
    cout<<"No"<<endl;
}

}


int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

  int t;
  cin>>t;
    while(t--)
     {
       solve();
     }
return 0;
}