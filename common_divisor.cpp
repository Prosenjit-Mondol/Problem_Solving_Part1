#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<utility>
using namespace std;

void solve(void)
{
    unsigned long long x,c=0,n,g=0;
    cin>>n;
    vector<long long>v;
    for (int i = 0; i <n; i++)
    {
       cin>>x;
       v.push_back(x);
       g=__gcd(g,x);
    }
    long long int t=sqrt(g);
    for (int j = 1; j<t+1; j++)
    {
        if(g%j==0)
        {
             c++;
            if(j!=g/j)
            {
                c++;
            }
        }
    }
    
    cout<<c<<"\n";
    
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