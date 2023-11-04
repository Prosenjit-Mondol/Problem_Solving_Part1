#include<bits/stdc++.h>
#include<tuple>
#include<utility>
#include<algorithm>
#define vi vector<int>v
#define pi pair<int,int>
using namespace std;
using ll=long long ;

void solve(void)
{
    for (int  i = 0; i <10; i++)
    {
        ll sum=0;
        for (int j=0;j<10;j++)
        {
            string s;
            cin>>s;
            for (int k= 0; k < 10; k++)
            {
                cout<<s[k];
            }
            
        }
        cout<<sum<<"\n";
        
    }
    

}


int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

  int t;
  cin>>t;
    while(t--)
     {
       solve();
     }
return 0;
}