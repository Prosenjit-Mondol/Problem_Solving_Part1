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
    set<char>s;
    string st;
    cin>>st;
    for (int i = 0; i <st.length(); i++)
    {
        s.insert(st[i]);

    }
    if (s.size()==1)
    {
        cout<<"NO"<<'\n';
    }
    else
    {

        for (int i = 0; i < st.length()-1; i++)
        {
            if (st[i]!=st[i+1])
            {
                char c=st[i+1];
                st[i+1]=st[i];
                st[i]=c;
            }
            
        }
        cout<<"YES"<<'\n';
        cout<<st<<'\n';
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