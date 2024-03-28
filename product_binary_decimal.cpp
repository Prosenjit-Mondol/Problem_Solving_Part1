//Author  :  PROSENJIT MONDOL


#include<bits/stdc++.h>
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower);
#define upper(s) transform(s.begin(), s.end(), s.begin(), ::toupper);
using namespace std;
const int inf = 3e5;
using ll=long long ;
ll mod = 1e9 + 7;

//------------------------------------------------------------------------------
bool isBinaryDecimal(int num) {
    while (num > 0) {
        int digit = num % 10;
        if (digit != 0 && digit != 1)
            return false;
        num /= 10;
    }
    return true;
}
void solve(void)
{
    int n;
    cin>>n;
    if (n==1)
    {
        cout<<"YES"<<'\n';
        return;
    }
    vector<ll>v;
    for(int i=10;i<=n;i++)
    {
        if (isBinaryDecimal(i))
        v.push_back(i);
    }

    auto it=find(v.begin(),v.end(),n);
    if(it!=v.end()){
        cout<<"YES"<<'\n';
        return;
    }

    for(auto el : v)
    {
       if (n%el==0&&(n/el)*el==n)
       {
        int x=n/el;
        auto t=find(v.begin(),v.end(),x);
        if(t!=v.end()){
            cout<<"YES"<<'\n';
            return;
        }
        for (int i = 0; i<v.size(); i++)
        {
            if (x%v[i]==0)
            {
                cout<<"YES"<<'\n';
                return;
            }
        }
       }
       
    }
    cout<<"NO"<<'\n';
    v.clear();
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