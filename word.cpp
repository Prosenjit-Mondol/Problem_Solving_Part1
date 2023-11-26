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
    
    for (int i = 0; i <8; i++)
    {
        string s,r;
        int k=0;
        cin>>s;
        for (int j= 0;j<8; j++)
        {
            if(s[j]>='a'&& s[j]<='z')
            {
                cout<<s[j];
                r[k]=s[j];
                k++;
            }
        }
    }
    cout<<'\n';
}


int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

  ll t;
  cin>>t;
    while(t--)
     {
       solve();
     }
return 0;
}