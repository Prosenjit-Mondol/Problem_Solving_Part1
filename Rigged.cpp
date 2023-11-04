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
    int n;
    cin>>n;
    vector<int>e;
    vector<ll>s;
    for(int i=0;i<n;i++)
    {
    int x;
    cin>>x;
    s.push_back(x);
    int y;
    cin>>y;
    e.push_back(y);
    }
    int w=s[0]-1;
    int c=0,v=0;
    for (int  i = 0; i <n; i++)
    {
        if(s[i]>=w)
        c+=e[i];
        else
        v++;
        //cout<<c<<" "<<v<<"\n";
    }
    if(v==0)
    cout<<"-1"<<"\n";
    else
    {
        cout<<(c-v)<<"\n";
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

int n;
        cin>>n;
        int b=0;
        int x[n],y[n];
        for(int i=0;i<n;i++)
        {
            cin>>x[i]>>y[i];
        }
        int a=x[0];
        for(int i=1;i<n;i++)
        {
            if(x[0]<=x[i])
            {
                if(y[0]<=y[i])
                b++;
            }
            
        }
         if(b>0)
         cout<<"-1"<<endl;
         else if(b==0)
         cout<<a<<endl;