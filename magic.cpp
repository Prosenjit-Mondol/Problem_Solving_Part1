#include<bits/stdc++.h>
#include<tuple>
#include<utility>
#include<algorithm>
#define vi vector<int>v
#define pi pair<int,int>
using namespace std;
using ll=long long ;

void solve(void)
{
    string s;
    int c=0;
    cin>>s;
    if(s.find("444")!=s.npos)
    {
        cout<<"NO"<<"\n";
    }
    else if(s[0]=='4')
    cout<<"NO"<<"\n";
    else
    {
        for (int i = 0; i <s.size(); i++)
        {
            if(s[i]!='1'&&s[i]!='4')
            {
                c=1;
                break;
            }
        }
        if(c==1)
        cout<<"NO"<<"\n";
        else
        cout<<"YES"<<"\n";        
    }
}


int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

  int t;
  t=1;
  //cin>>t;
    while(t--)
     {
       solve();
     }
return 0;
}