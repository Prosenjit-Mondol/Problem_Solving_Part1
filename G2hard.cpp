#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<utility>
using namespace std;
using ll=long long ;

void solve(void)
{
    int c=0,n,x;
    ll s=0;
    cin>>n;
    vector<int>v;
    for (int i = 0; i <n; i++)
    {
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    s=v[0];
    if(v[0]!=1)
    {
        cout<<"NO"<<"\n";
    }
    
    else
    {
        for (int i = 1; i <n;++i)
        {
            if(s<v[i])
            {
                c=1;
                break;
            }
            s+=v[i];
        }
        if(c==1)
        cout<<"NO"<<"\n";
        else
        cout<<"YES"<<"\n";
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