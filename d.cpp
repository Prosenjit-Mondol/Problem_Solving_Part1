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
    string s;
    cin>>s;
    ll c=0;
    if (s=="0")
    {
        cout<<"Counterfeit."<<'\n';
        return;
    }
    
    for (int i =s.size()-1; i>=0; i--)
    {
        if (s[i]=='0')
        {
            c++;
        }
        if (s[i]!='0')
        {
            break;
        }
        
    }
    if (c==0)
    {
        cout<<"Ekok."<<'\n';
    }
    else if (c==1)
    {
        cout<<"Dashak."<<'\n';
    }
    else if (c==2)
    {
        cout<< "Shatak."<<'\n';
    }
    else
    {
        cout<<"Counterfeit."<<'\n';
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