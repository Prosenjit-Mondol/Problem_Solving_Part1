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
    int n;
    cin>>n;
    string s;
    cin>>s;
    int sum=0;
    for (int i=0;i<s.length();i++)
    {
      int f=0;
        for (int j = i-1; j >=0; j--)
        {
          //cout<<s[j]<<" ";
          if(s[i]==s[j])
          {
            f=1;
            break;
          }
        }
        if(f==1)
        sum++;
        else
        sum+=2;
    }
    cout<<sum<<"\n";
}


int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

  int t;
  cin>>t;
    while(t--)
     {
       solve();
     }
return 0;
}