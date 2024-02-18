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
    ll product=1;
    int l=0,r,n,m;
    cin>>n>>m;
    r=n-1;
    vector<int>a,ans;
    for(int i=0;i<n;i++)
    {
        int o;
        cin>>o;
        a.push_back(o);
    }
    string str;
    cin>>str;
    
    for (int i = 0; i <n; i++)
    {
        if (str[i]=='L')
        {
            l++;
        }
        else
        {
            r--;
        }
        
    }
    
    for (int i = n - 1; i >= 0; i--) {
            if (str[i] == 'L') {
                l--;
                product *= a[l];
                product = product % m == 0? m : product % m;
                ans.push_back(product);
            } else {
                r++;
                product *= a[r];
                product = product % m == 0? m : product % m;
                ans.push_back(product);
            }
        }

    for (int i = ans.size() - 1; i >= 0; i--) {
        cout << ans[i]%m << " ";
    }
    
    cout<<'\n';
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