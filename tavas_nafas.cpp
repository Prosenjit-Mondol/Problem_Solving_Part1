//Author  :  PROSENJIT MONDOL


#include<bits/stdc++.h>
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower);
#define upper(s) transform(s.begin(), s.end(), s.begin(), ::toupper);
using namespace std;
const int inf = 3e5;
using ll=unsigned long long ;
ll mod = 10e9 + 7;

//------------------------------------------------------------------------------

void solve(void)
{
    int s;
    cin>>s;
    string x[11]={"zero","one","two","three","four","five","six","seven","eight","nine","ten"};
    string y[10]={" "," ","twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety"};
    string z[10]={" ","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"};
    if (s<11)
    {
        cout<<x[s]<<'\n';
    }
    else if (s>10&&s<20)
    {
        int o=s%10;
        cout<<z[o]<<'\n';
    }
    else
    {
        int a=s%10;
        int b=s/10;
        if(a)
        cout<<y[b]<<"-"<<x[a]<<'\n';
        else
        cout<<y[b]<<"\n";
    }
    
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