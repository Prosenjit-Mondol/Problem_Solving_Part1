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
    int k=0,c=0,n;
    cin>>n;
    vector<string>v;
    for(int i=0;i<n;i++)
    {
        string o;
        cin>>o;
        v.push_back(o);
    }
    char x=(v[0][0]+1);
    for (int i = 1; i < n; i++)
    {
        if (v[0][0]==v[i][0]&&v[0][1]==v[i][1]&&v[0][2]==v[i][2]&&v[0][3]==v[i][3])
        {
            c++;
            v[i][k]=x;
            k++;
            if (k>3)
            {
                k=0;
            }
            
        }
        
    }
    cout<<c<<'\n';
    for(auto element : v)
    {
    cout<<element<<'\n';
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