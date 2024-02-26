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
    int n;
    cin>>n;
    int p[n],a[n],b[n];
    for (int i = 1; i <=n; i++)
    {
        cin>>p[i];
    }
    for (int i = 1; i <=n; i++)
    {
        cin>>a[i];
    }
    for (int i =1; i <=n; i++)
    {
        cin>>b[i];
    }

    priority_queue<int,vector<int>,greater<int>>pq[5][5];

    for (int i =1; i <=n; i++)
    {
        pq[a[i]][b[i]].push(p[i]);
    } 

    int m;
    cin>>m;
    while (m--)
    {
        int ans=INT_MAX;
        int c;
        cin>>c;

        int f,b;

        for (int i = 1; i <=3; i++)
        {
            if(!pq[c][i].empty()&&pq[c][i].top()<ans)
            {
                ans=pq[c][i].top();
                f=c;b=i;
            }
        }

        for (int i = 1; i <=3; i++)
        {
            if(!pq[i][c].empty()&&pq[i][c].top()<ans)
            {
                ans=pq[i][c].top();
                f=i;b=c;
            }
        }

        if (ans==INT_MAX)
        {
            cout<<-1<<" ";
        }
        else
        {
            cout<<ans<<" ";
            pq[f][b].pop();
        }
        
    }
    cout<<'\n';
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