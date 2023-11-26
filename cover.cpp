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
    int sum=0,c=0,n;
    cin>>n;
    string s;
    cin>>s;
    for (int i = 0; i <n; i++)
    {
        if(s[i]=='.')
        {
            c=0;
            for ( ; i< n; i++)
            {
                if(s[i]!='.')
                break;
                else
                c++;
            }
            if(c<2)
            sum++;
            else
            sum+=2;
        }
    }
    if(sum==1 && s[n-1]=='#')
    cout<<1<<'\n';
    else if(sum>1 && s[n-1]=='#')
    cout<<2<<'\n';
    else
    cout<<sum<<'\n';
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