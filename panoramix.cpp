#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<utility>
using namespace std;
using ll=long long ;

bool ispriem(long long a)
{
if(a<2)
return 0;
else if(a==2)
return 1;
else if(a%2==0)
return 0;
else
{
for(int i=3;i<=sqrt(a)+1;i+=2)
{
if(a%i==0){
return 0;
}
}
return 1;
}
}
void solve(void)
{
    int n,m,a=0;
    cin>>n>>m;
    for (int i = n+1; i<=m; i++)
    {
        if(ispriem(i))
        {
            if(i==m)
            {
                a=1;
            }
            break;
        }
    }
    if(a==1)
    {
        cout<<"YES"<<"\n";
    }
    else
    cout<<"NO"<<"\n";
    
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