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
        
        cout<<"YES"<<'\n';
        vector<ll>f,s;

        if (n%2==0)
        {
            for (int i = 0; i < n/2; i++)
            {
                if (i%2==0)
                {
                    f.push_back(i+1);
                    f.push_back(n-i);
                }
                else
                {
                    s.push_back(i+1);
                    s.push_back(n-i);
                }
            }
        }
        else
        {
            for (int i = 0; i <(n-1)/2; i++)
            {
                if (i%2==0)
                {
                    f.push_back(i+1);
                    f.push_back(n-i-1);
                }
                else
                {
                    s.push_back(i+1);
                    s.push_back(n-i-1);
                }
            }
            if (f.size()>s.size())
            {
                s.push_back(n);
            }
            else
            {
                f.push_back(n);
            }
            
        }
        cout<<f.size()<<'\n';
        for(auto element : f)
        {
        cout<<element<<" ";
        }
        cout<<'\n';

        cout<<s.size()<<'\n';
        for(auto element : s)
        {
        cout<<element<<" ";
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