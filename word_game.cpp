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
    set<string>r[3];
    string s;
    for (int i = 0; i < 3; i++)
    {
        for (int j= 0; j< n; j++)
        {
            cin>>s;
            r[i].insert(s);
        }
    }
    for (int i = 0; i < 3; i++)
    {
        int result=0;

        for (set<string>::iterator it=r[i].begin();it!=r[i].end();it++)
        {
             if(r[(i+1)%3].count(*it) && r[(i+2)%3].count(*it))
             continue;
             if(r[(i+1)%3].count(*it) || r[(i+2)%3].count(*it))
             result++;
             else
             {
                result+=3;
             }
        }
        cout<<result<<" ";
    }
    cout<<'\n';
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