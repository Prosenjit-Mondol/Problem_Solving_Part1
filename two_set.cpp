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
    ll r=0,k,n;
    cin>>n;
    k=n;
    ll sum=n*(n+1)/2;
    if (sum%2!=0)
    {
        cout<<"NO"<<'\n';
    }
    else
    {
        sum/=2;
        set<int>s1;
        map<int,int>mp;
        while (sum>r)
        {
            
            if ((sum-r)<n)
            {
                s1.insert(sum-r);
                break;
            }
            r+=k;
            s1.insert(k);
            k--;
        }
        cout<<"YES"<<'\n'<<s1.size()<<'\n';
        for (auto it :s1)
        {
            cout << it<< ' ';
            mp[it]=1;
        }
        cout<<'\n'<<(n-s1.size())<<'\n';
        for (int i =1; i <=n; i++)
        {
            if (mp[i]!=1)
            {
                cout<<i<<" ";
            }
            
        }
        cout<<'\n';
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