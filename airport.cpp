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
    int n,m;
    cin>>n>>m;
    vector<ll>v;
    priority_queue<int>pq;
    ll s=0,r=0,sum=0;
    for(int i=0;i<m;i++)
    {
        ll o;
        cin>>o;
        v.push_back(o);
        pq.push(o);
        sum+=o;
    }
    for (int i = 0; i <n; i++)
    {
        int temp=pq.top();
        s+=temp;
        temp--;
        pq.push(temp);
    }
    
    sort(v.begin(),v.end());
    int c=0;
    for (int i = 0; i <m; i++)
    {
        while (v[i]>1)
        {
            r+=v[i];
            v[i]--;
            c++;
            if (c==n)
            {
                break;
            }
            
        }
        if (c==n)
        {
            break;
        }
        
    }
    cout<<s<<" "<<r<<'\n';
    
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