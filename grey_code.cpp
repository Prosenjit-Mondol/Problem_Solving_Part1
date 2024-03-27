//Author  :  PROSENJIT MONDOL


#include<bits/stdc++.h>
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower);
#define upper(s) transform(s.begin(), s.end(), s.begin(), ::toupper);
using namespace std;
const int inf = 3e5;
using ll=long long ;
ll mod = 1e9 + 7;

//------------------------------------------------------------------------------

vector<string>gc(int n)
{
    if (n==0){
        return {"0"};
    }
    if (n==1){
        return {"0","1"};
    }
    vector<string>temp1;
    vector<string>temp;
    temp1=gc(n-1);
    for (int i = 0; i <temp1.size(); i++)
    {
        temp.push_back("0"+temp1[i]);
    }
    for (int i = temp1.size()-1; i>=0; i--)
    {
        temp.push_back("1"+temp1[i]);
    }
    return temp;
}
void solve(void)
{
    int n;
    cin>>n;
    vector<string>ans;
    ans=gc(n);
    for(auto element : ans)
    {
    cout<<element<<"\n";
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