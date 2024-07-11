//Author  :  PROSENJIT MONDOL


#include<bits/stdc++.h>
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower);
#define upper(s) transform(s.begin(), s.end(), s.begin(), ::toupper);
using namespace std;
const int inf = 3e5;
using ll=long long ;
ll mod = 1e9 + 7;

//------------------------------------------------------------------------------

void solve(void)
{
    int n;
    cin >> n;
    vector<ll>v(n),st(n);
    for(auto &in:v) cin>>in;
    st=v;
    sort(st.begin(),st.end());
    ll l, r;
    for(l=0;l<n;l++){
        if(v[l] != st[l])break;
    }
    for(r=n-1; r>=0;r--){
 
        if(v[r] != st[r])break;
    }
    if(l == n && r+1==0){
        cout<<"yes"<<endl<<"1"<<" 1" << endl;
        return;
    }
    for(ll i=l;i<r;i++)
    {
        if(v[i]<v[i+1]) {cout<<"no"<<endl;return;}
    }
    cout<<"yes"<<endl<<l+1<<" "<<r+1<<endl;
}


//------------------------------------------------------------------------------
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

  ll t=1;
  //cin>>t;
    while(t--)
     {
       solve();
     }
return 0;
}