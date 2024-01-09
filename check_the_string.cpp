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
    int i,r=0,a=0,b=0,c=0;
    int l=s.length();
    for(i=0;i<l;i++){
        if((s[i]=='b' && s[i+1]=='a') || (s[i]=='c' && s[i+1]=='b') || (s[i]=='c' && s[i+1]=='a') || (s[i]=='a' && s[i+1]=='c')){
            r=1;
            break;
        }
        if(s[i]=='a') a++;
        else if(s[i]=='b') b++;
        else if(s[i]=='c') c++;
    }
    if(r==1) cout<<"NO";
    else if(a==0 || b==0) cout<<"NO";
    else if(c!=a && c!=b) cout<<"NO";
    else cout<<"YES";
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