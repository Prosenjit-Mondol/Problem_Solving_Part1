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
    char s2[s.length()+1];
    cin>>s;
    for (int k=0,i = 0; i < s.length()-1; i++)
    {
        if(s[i]==s[i+1])
        {
            s2[k]=s[i];
            i++;
            k++;
        }
        else
        s2[k++]=s[i];
    }
    cout<<s2<<"\n";
}


int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

  ll t;
  t=1;
  //cin>>t;
    while(t--)
     {
       solve();
     }
return 0;
}