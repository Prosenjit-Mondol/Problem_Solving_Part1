//Author  :  PROSENJIT MONDOL


#include<bits/stdc++.h>
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower);
#define upper(s) transform(s.begin(), s.end(), s.begin(), ::toupper);
using namespace std;
const int inf = 3e5;
using ll=long long ;
ll mod = 1e9 + 7;

//------------------------------------------------------------------------------


void TH(int n,int from,int to,int aux){
    if (n==0)
    {
        return;
    }
    TH(n-1,from,aux,to);
    cout<<from<<" "<<to<<'\n';
    TH(n-1,aux,to,from);
}
void solve(void)
{
    int n;
    cin>>n;
    
    cout<<(1<<n)-1<<'\n';

    TH(n,1,3,2);
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