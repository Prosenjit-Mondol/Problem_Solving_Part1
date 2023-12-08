#include<bits/stdc++.h>
#include<tuple>
#include<utility>
#include<algorithm>
using namespace std;
const int inf = 3e5;
using ll=unsigned long long ;

void solve(void)
{
    string s,rs;
    int k=0,cl=0,cu=0;
    cin>>s;
    for (int i = s.length()-1; i>=0; i--)
    {
        if (s[i]=='b')
        {
            cl++;
        }
        else if (s[i]=='B')
        {
            cu++;
        }
        else if (s[i]<='Z'&&s[i]>='A')
        {
            if (cu>0)
            {
                cu--;
                s[i]='*';
            }
            
        }
        else if (s[i]<='z'&&s[i]>='a')
        {
            if (cl>0)
            {
                cl--;
                s[i]='*';
            }
            
        }
    }
    for (int i = 0; i<s.length(); i++)
    {
        if (s[i]!='B'&&s[i]!='b'&&s[i]!='*')
        {
            cout<<s[i];
        }
        
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