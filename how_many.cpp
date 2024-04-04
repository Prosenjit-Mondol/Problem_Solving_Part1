//Author  :  PROSENJIT MONDOL


#include<bits/stdc++.h>
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower);
#define upper(s) transform(s.begin(), s.end(), s.begin(), ::toupper);
using namespace std;
const int inf = 3e5;
using ll=long long ;
ll mod = 1e9 + 7;

//------------------------------------------------------------------------------
void pr(string su){
    ll cnt=0;
    string ch=su;
    do
    {
        cnt++;
        cnt=cnt%mod;
    } while (next_permutation(su.begin(),su.end()));
    if (cnt<10)
    {
        cnt--;
        cout<<cnt<<'\n';
    }
    else
    cout<<cnt<<'\n';

}
void solve(void)
{
    int n,q;
    cin>>n>>q;
    string s;
    cin>>s;
    for (int i = 0; i < q; i++)
    {
        int a,b;
        cin>>a>>b;

        string su=s.substr(a-1,b-a+1);
        pr(su);
    }
    
    
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