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
    int sum=0,n;
    cin>>n;
    priority_queue<int>pq;
    for (int i = 0; i <n; i++)
    {
        int a;
        cin>>a;
        pq.push(-a);
    }
    if (pq.size()==1)
    {
        cout<<abs(pq.top())<<'\n';
        return;
    }
    
    while (pq.size()>1)
    {
        int x,y;
        x=pq.top();
        pq.pop();
        y=pq.top();
        pq.pop();
        sum+=abs(x+y);
        pq.push(x+y);
    }
    
    cout<<sum<<'\n';
}


//------------------------------------------------------------------------------
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