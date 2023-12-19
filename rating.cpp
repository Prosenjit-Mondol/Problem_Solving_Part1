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
    string s;
    cin>>s;
    int l=s.length(),k=1;
    string a,b;
    a=s.substr(0,1);
    b=s.substr(1,l);
    while (l--)
    {
      int al,bl;
      al=stoi(a);
      bl=stoi(b);
      if (b[0]!='0'&& al>0 &&bl>0&&al<bl)
      {
        cout<<a<<" "<<b<<'\n';
        return;
      }
        a=s.substr(0,k);
        b=s.substr(k);  
        k++;
    }
    cout<<-1<<'\n';
    
    
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