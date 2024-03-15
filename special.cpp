//Author  :  PROSENJIT MONDOL


#include<bits/stdc++.h>
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower);
#define upper(s) transform(s.begin(), s.end(), s.begin(), ::toupper);
using namespace std;
const int inf = 3e5;
using ll=long long ;
ll mod = 1e9 + 7;

//------------------------------------------------------------------------------

void solve(void)
{
    int n;
    cin>>n;
    if (n%2!=0)
    {
        cout<<"NO"<<'\n';
    }
    else{
         cout<<"YES"<<'\n';
         char ch='A';
         for (int i = 0; i <n/2; i++)
         {
            cout<<ch<<ch;
            ch++;
            if (i==25)
            {
                ch='A';

            }
            
         }
         cout<<'\n';
    }
}


//------------------------------------------------------------------------------
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

  ll t=1;
  cin>>t;
    while(t--)
     {
       solve();
     }
return 0;
}