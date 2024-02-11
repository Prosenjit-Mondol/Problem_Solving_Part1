//Author  :  PROSENJIT MONDOL


#include<bits/stdc++.h>
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower);
#define upper(s) transform(s.begin(), s.end(), s.begin(), ::toupper);
using namespace std;
const int inf = 3e5;
using ll=unsigned long long ;
ll mod = 10e9 + 7;

//------------------------------------------------------------------------------

void solve(void)
{
    int a,b,z=1,c=0,m=1,n;
    cin>>n;
    set<int>s;
    for(int i=0;i<n;i++)
    {
    int x;
    cin>>x;
    int r=x%10;
    s.insert(r);
    }
    int l=s.size();
    vector<ll>v;
    for (auto it = s.begin(); it !=s.end(); ++it)
    {
    v.push_back(*it);
    }
    a=v[0];
    b=v[l-1];


    if ((b-a+1)<=n){
        cout<<l<<'\n';
    }
    else
    {
        while ((b-a+1)>n)
        {
            int fa=v[m];
            int lb=v[l-z];
            if ((b-fa+1)<(lb-a+1))
            {
                a=fa;
                m++;
            }
            else
            {
                b=lb;
                z++;
            }
            
        }
        cout<<(s.size()+2-m-z)<<'\n';
    }
    

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