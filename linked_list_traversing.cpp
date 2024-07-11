//Author  :  PROSENJIT MONDOL


#include<bits/stdc++.h>
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower);
#define upper(s) transform(s.begin(), s.end(), s.begin(), ::toupper);
using namespace std;
const int inf = 3e5;
using ll=long long ;
ll mod = 1e9 + 7;

//------------------------------------------------------------------------------
void search(char info[],int link[],int start,char item){
  while (start!=0)
  {
    if (item==info[start])
    {
      cout<<"Location of "<<item<<" is "<<start<<'\n';
      return;
    }
    else
    {
      start=link[start];
    }
    
  }
  cout<<"Item is not found in list"<<'\n';
}
void solve(void)
{
    char x,info[12];
    int y,link[12];
    int start=9;
    // info[3]='o'; link[3]=6;
    // info[4]='t'; link[4]=0;
    // info[6]=' '; link[6]=11;
    // info[7]='x'; link[7]=10;
    // info[9]='n'; link[9]=3;
    // info[10]='i'; link[10]=4;
    // info[11]='e'; link[11]=7;

    for (int i = 1; i < 12; i++)
    {
      cin>>x>>y;
      info[i]=x;
      link[i]=y;
    }
    
    while (start!=0)
    {
        cout<<info[start];
        start=link[start];
    }
    cout<<'\n';
    search(info,link,9,'e');
}


//------------------------------------------------------------------------------
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

  ll t=1;
  //cin>>t;
    while(t--)
     {
       solve();
     }
return 0;
}