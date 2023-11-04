#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,m,r1,r2,total;
  cin>>n>>m;
  r1=n/m;
  total=n+r1;
  while(1)
  {
    r2=total/m;
    if(r1==r2)
    {
      cout<<total<<"\n";
      break;
    }
    else
    {
      total+=(r2-r1);
      r1=r2;
    }
  }
  return 0;
}