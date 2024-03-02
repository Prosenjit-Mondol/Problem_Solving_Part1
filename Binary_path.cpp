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
    int f=0,n;
    cin>>n;
    char arr[3][n + 2];
     for (int i = 1; i <= 2; i++)
     {
          for (int j = 1; j <= n; j++)
          {
               cin >> arr[i][j];
          }
     }
     int last = n;
     for (int i = 1; i < n; i++)
     {
          if (arr[2][i] < arr[1][i + 1])
          {
               last = max(1, i);
               break;
          }
     }
     int first = 1;
     for (int i = last; i > 1; i--)
     {
          if (arr[2][i - 1] > arr[1][i])
          {
               first = i;
               break;
          }
     }
     for (int i = 1; i <= last; i++)
          cout << arr[1][i];
     for (int i = last; i <= n; i++)
          cout << arr[2][i];
     cout << '\n';
     cout << last - first + 1 << '\n';


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