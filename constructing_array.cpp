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
    int arr[inf];
    priority_queue<pair<int,int>>pq;
    pq.push({n,-1});
    int c=1;
    while (!pq.empty())
    {
        int len=pq.top().first;
        int l=pq.top().second*-1;
        pq.pop();
        int r=l+len-1;
        int mid;
        if (len%2==0)
        {
            mid=(r+l-1)/2;
        }
        else
        {
            mid=(r+l)/2;
        }
        arr[mid]=c;
        c++;

        int l1,r1,l2,r2;
        l1=l;
        r1=mid-1;
        l2=mid+1;
        r2=r;
        if (l1<=r1)
        {
            pq.push({r1-l1+1,-l1});
        }
        if (l2<=r2)
        {
            pq.push({r2-l2+1,-l2});
        }

    }
    
    for (int i = 1; i <=n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<'\n';
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