//Author  :  PROSENJIT MONDOL


#include<bits/stdc++.h>
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower);
#define upper(s) transform(s.begin(), s.end(), s.begin(), ::toupper);
using namespace std;
const int inf = 3e5;
using ll=long long ;
ll mod = 10e9 + 7;

//------------------------------------------------------------------------------

void solve(void)
{
  int n,k,x;
  cin>>n>>k>>x;

  vector<int>v;
  for(int i=0;i<n;i++)
  {
      int o;
      cin>>o;
      v.push_back(o);
  }
  sort(v.begin(),v.end());

  vector<ll>v2(n,0);
  v2[0]=v[0];
  for(int i=1;i<n;i++)
  {
      v2[i]=v2[i-1]+v[i];
  }
  ll ans=INT_MIN;
  for (int i = 0; i <=k; i++)
  {
    if (i==n)
    {
      ans=max(ans,0LL);
      break;
    }
    ll afterR=v2[n-1-i];
    int canNegify=min(n-i,x);
    int lastRemainingIndex=n-1-i;
    int negifiedTill=max(0,lastRemainingIndex-canNegify+1);
     ll gain;
         ll negifiedWindowSum;
         if(negifiedTill==0){
            negifiedWindowSum = v2[lastRemainingIndex];
            gain= -negifiedWindowSum;
         }
         else{
            negifiedWindowSum=v2[lastRemainingIndex]-v2[negifiedTill-1];
            gain = v2[negifiedTill-1]-negifiedWindowSum;
         }
 
         ans=max(ans,gain);
  }
  
cout<<ans<<'\n';
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