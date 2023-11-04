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
    cin>>s;
    int l=s.size();
    vector<int> cnt(27,0);
    for (int i = 0; i < l; i++)
    {
        int a= s[i]-'A';
        cnt[a]++;
    }
    int odd=0;
    for (int i = 0; i < 26; i++)
    {
        if(cnt[i]%2==0)
        odd++;
    }
    if(l%2)
    {
        if(odd%2==1)
        cout<<"NO SOLUTION\n";
        
    }
}


int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

  int t;
  t=1;
    while(t--)
     {
       solve();
     }
return 0;
}