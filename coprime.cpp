#include<bits/stdc++.h>
#include<tuple>
#include<utility>
#include<algorithm>
using namespace std;
const int inf = 3e5;
using ll=unsigned long long ;

bool check_prime(int n) {
  bool is_prime = true;
  if (n == 0 || n == 1) {
    is_prime = false;
  }

  for (int i = 2; i <= n / 2; ++i) {
    if (n % i == 0) {
      is_prime = false;
      break;
    }
  }

  return is_prime;
}
void solve(void)
{
    ll n,sum=0;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        ll o;
        cin>>o;
        v.push_back(o);
    }
    for (int  i = n; i>=0; i--)
    {
        for (int j= i-1; j>=0; j--)
        {
            if (v[i]==v[j])
            {
                continue;
            }
            else if ((v[j]%v[i]==0)||(v[i]%v[j]==0))
            {
                continue;
            }
            else if (v[i]==1)
            {
                sum=i+i+2;
            }
            else if (check_prime(v[i]))
            {
                for (int k =i-1;k>=0;k--)
                {
                    if (v[k]!=v[i])
                    {
                        sum=i+k+2;
                    }
                    
                }
                
            }
            
        }
        
    }
    if (sum==0)
    {
        cout<<-1<<'\n';
    }
    else
    cout<<sum<<'\n';
}


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