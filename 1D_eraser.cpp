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
    ll n,k,sum=0;
    cin>>n>>k;
    string s;
    cin>>s;
    for (int i = 0; i < n; )
    {
        if(s[i]=='B')
        {
            sum++;
            i+=k;
        }
        else{
            i++;
        }
    }
        cout<<sum<<"\n";
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