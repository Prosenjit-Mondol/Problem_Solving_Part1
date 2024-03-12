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
    int n,m,x;
    cin>>n>>m>>x;
    set<int>s;
    s.insert(x);

    for(int i=0;i<m;i++)
    {
        char b;
        int a;
        cin>>a>>b;
        set<int>st;

        for (auto it :s)
        {
            int c=it+a;
            int ac=it-a+n;
            c%=n;
            ac%=n;
            if (c==0) c=n;
            if (ac==0) ac=n;
            if (b=='?')
            {
                st.insert(c);
                st.insert(ac);
            }
            else if (b=='0')
            {
                st.insert(c);
            }
            else
            {
                st.insert(ac);
            }
        }
        s=st;
    }
    cout<<s.size()<<'\n';
    for (auto it :s)
    {
        cout << it<<" ";
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