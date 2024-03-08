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
    int r=INT_MAX;
    string s;
    cin>>s;
    set<char>st;
    for (int i = 0; i <s.length()-2; i++)
    {
        if(s[i]!=s[i+1])
        {
            int k=i;
            st.insert(s[i]);
            while (st.size()<=3)
            {
                k++;
                st.insert(s[k]);
            }
            r=min(r,(k-i-1));
            st.clear();
        }
    }
    cout<<r<<'\n';
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