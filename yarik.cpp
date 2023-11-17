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
    ll j,n,s=0,ma=-999999;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
    int x;
    cin>>x;
    v.push_back(x);
    }

    if(n==1)
    {
        cout<<v[0]<<'\n';
    }
//((v[j]%2==0 && v[j+1]%2==0) ||(v[j]%2!=0 && v[j+1]%2!=0))
    else
    {
        for (int i = 0; i <n;)
        {
           if((v[i]%2!=v[i+1]%2))
           {
            s=0;
            if (v[i]<0)
            {
               i++;
            }
            for (j=i;j<n;j++)
            {
                s+=v[j];
                if((v[j]%2==0 && v[j+1]%2==0) ||(v[j]%2!=0 && v[j+1]%2!=0))
                {
                    if (v[j]<0)
                    {
                        s-=v[j];
                    }
                    
                    break;
                }

            }
            i=j;
            ma=max(ma,s);
           }
           else
           {
            i++;
           }
        }
        cout<<ma<<'\n';
    }

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