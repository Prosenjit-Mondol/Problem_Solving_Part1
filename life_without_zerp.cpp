//Author  :  PROSENJIT MONDOL


#include<bits/stdc++.h>
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower);
#define upper(s) transform(s.begin(), s.end(), s.begin(), ::toupper);
using namespace std;
const int inf = 3e5;
using ll=unsigned long long ;
ll mod = 10e9 + 7;

//------------------------------------------------------------------------------
ll removeZeros(ll number) {
    string strNumber = std::to_string(number);
    strNumber.erase(remove(strNumber.begin(), strNumber.end(), '0'), strNumber.end());
    return stoi(strNumber);
}

void solve(void)
{
    ll c,a,b;
    cin>>a>>b;
    c=a+b;
    a=removeZeros(a);
    b=removeZeros(b);
    c=removeZeros(c);
    if ((a+b)==c)
    {
        cout<<"YES"<<"\n";
    }
    else
    cout<<"NO"<<'\n';
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