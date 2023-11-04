#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<utility>
using namespace std;
using ll=long long ;

void solve(void)
{
    char c;
    int k,l;
    cin>>c;
    string s,s1={"qwertyuiopasdfghjkl;zxcvbnm,./"},s2={"qwertyuiopasdfghjkl;zxcvbnm,./"};
    cin>>s;
    if(c=='R')
    {
        for (int i = 0;i<s.size(); i++)
        {
            for (int j = 0;j<s1.size();j++)
            {
                if(s[i]==s1[j])
                {
                    s[i]=s1[j-1];
                }
            }
        }
        
        cout<<s<<"\n";
    }
    else
    {
        for (k = 0;k<s.size(); k++)
        {
            for (l = 0;l<s2.size();l++)
            {
                if(s[k]==s2[l])
                {
                    s[k]=s2[++l];
                }
            }
        }
        cout<<s<<"\n";
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