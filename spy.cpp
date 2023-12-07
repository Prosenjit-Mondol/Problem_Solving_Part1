#include<bits/stdc++.h>
#include<tuple>
#include<utility>
#include<algorithm>
using namespace std;
const int inf = 3e5;
using ll=unsigned long long ;

void solve(void)
{
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
    int x;
    cin>>x;
    v.push_back(x);
    }
    for (int i = 0; i <n-1; i++)
    {
        if(v[i]!=v[i+1])
        {
            if ((i+2)==n)
            {
                if (v[i]!=v[i-1])
                {
                    cout<<(i-1)<<'\n';
                }
                else
                cout<<(i+2)<<'\n';
            }
            else if (i==0)
            {
                if (v[i]!=v[i+2])
                {
                    cout<<(i+1)<<'\n';
                }
                else
                cout<<(i+2)<<'\n';
            }
            
            else
            cout<<(i+2)<<'\n';
            break;
        }
    }
}


int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

  ll t=1;
  cin>>t;
    while(t--)
     {
       solve();
     }
return 0;
}