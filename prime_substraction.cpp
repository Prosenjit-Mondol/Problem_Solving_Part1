#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<utility>
using namespace std;
using ll=long long ;

bool ispriem(long long a)
{
    for (int i = 2; i <=(a+1)/i; i++)
  {
      if(a%i==0)
      {
        return false;
      }
  }
  return true;
}
void solve(void)
{
    ll n,x,y,z;
    cin>>x>>y;
    z=x-y;
    if(z<2)
    {
        cout<<"NO"<<"\n";
    }
    else if(z%2==0)
    {
        cout<<"YES"<<"\n";
    }
    else
    {
        n=sqrt(z)+1;
        int r=1;
        for (int i = 3; i < n; i++)
        {
            if(z%i==0)
            {
                r=0;
                r=ispriem(i);
                if(r==0 && z/i!=i)
                {
                    r=ispriem(z/i);
                }
            }
            if(r==1)
            break;
        }
        if(r==1)
        cout<<"YES"<<"\n";
        else
        cout<<"NO"<<"\n";
    }
    
}


int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

  int t;
  //t=1;
  cin>>t;
    while(t--)
     {
       solve();
     }
return 0;
}
