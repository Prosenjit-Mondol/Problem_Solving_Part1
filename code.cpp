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
    string m;
    cin>>m;
    int n;
    cin>>n;
    
    map<string ,int>mp;
    mp["January"]=1;
    mp["February"]=2;
    mp["March"]=3;
    mp["April"]=4;
    mp["May"]=5;
    mp["June"]=6;
    mp["July"]=7;
    mp["August"]=8;
    mp["September"]=9;
    mp["October"]=10;
    mp["November"]=11;
    mp["December"]=12;
    n=n+mp[m];
    n%=12;
    switch (n)
    {
        case 1:
        cout<<"January"<<'\n';
        break;
        case 2:
        cout<<"February"<<'\n';
        break;
        case 3:
        cout<<"March"<<'\n';
        break;
        case 4:
        cout<<"April"<<'\n';
        break;
        case 5:
        cout<<"May"<<'\n';
        break;
        case 6:
        cout<<"June"<<'\n';
        break;
        case 7:
        cout<<"July"<<'\n';
        break;
        case 8:
        cout<<"August"<<'\n';
        break;
        case 9:
        cout<<"September"<<'\n';
        break;
        case 10:
        cout<<"October"<<'\n';
        break;
        case 11:
        cout<<"November"<<'\n';
        break;
        case 0:
        cout<<"December"<<'\n';
        break;
    }
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