//Author  :  PROSENJIT MONDOL


#include<bits/stdc++.h>
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower);
#define upper(s) transform(s.begin(), s.end(), s.begin(), ::toupper);
using namespace std;
const int inf = 3e5;
using ll=unsigned long long ;

//------------------------------------------------------------------------------

void solve(void)
{
    int c=0,a,b,n;
    cin>>n;
    vector<pair<int,int>>vp;
   for (int i = 0; i < n; i++)
   {
      cin>>a>>b;
      vp.push_back(make_pair(a,b));
   }
    for (int i = 0; i < n; i++)
    {
      int x = vp[i].first;
      int y = vp[i].second;
      bool f1 = false;
      bool f2 = false;
      bool f3 = false;
      bool f4 = false;
      for(int i=0;i<n;i++)
        {
          if(y>vp[i].second and x==vp[i].first)
            {
              f1 = true;
            }
          if(y<vp[i].second and x==vp[i].first)
            {
              f2 = true;
            }
          if(x>vp[i].first and y==vp[i].second)
            {
              f3 = true;
            }
          if(x<vp[i].first and y==vp[i].second)
            {
              f4 = true;
            }
        }
      if(f1==true and f2==true and f3==true and f4==true)
        {
          c++;
        }
    }
    
    cout<<c<<'\n';
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