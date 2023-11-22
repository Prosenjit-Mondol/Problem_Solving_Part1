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
    int n,c=0,b=0;
    cin>>n;
    string s;
    cin>>s;
    for (int i= 0;i<n;i++)
    {
        if (s[i]=='(')
        {
            ++b;
        }
        else
        {
            --b;
            if(b<0)
            {
                b=0;
                ++c;
            }
        }
    }
    cout<<c<<'\n';
}

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

  ll t;
  cin>>t;
    while(t--)
     {
       solve();
     }
return 0;
}