#include<bits/stdc++.h>
#include<tuple>
#include<utility>
#include<algorithm>
using namespace std;
const int inf = 3e5;
using ll=unsigned long long ;

void solve(void)
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if(a!=c)
    {
        if(a==0 || c==0)
        {
            if(a==0)
            cout<<"Takahashi"<<'\n';
            else
            cout<<"Aoki"<<'\n';
        }
        else if(a>c)
        cout<<"Aoki"<<'\n';
        else
        cout<<"Takahashi"<<'\n';
    }
    else
    {
        if(b<d)
        cout<<"Takahashi"<<'\n';
        else if(b==d)
        cout<<"Takahashi"<<'\n';
        else
        cout<<"Aoki"<<'\n';
    }
}


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