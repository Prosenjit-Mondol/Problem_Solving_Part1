//Author  :  PROSENJIT MONDOL


#include<bits/stdc++.h>
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower);
#define upper(s) transform(s.begin(), s.end(), s.begin(), ::toupper);
using namespace std;
const int inf = 3e5;
using ll=long long ;
ll mod = 1e9 + 7;

//------------------------------------------------------------------------------

//------------------------------------------------------------------------------
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n;
    cin>>n;
    if (n==1)
    {
       cout<<1<<'\n';
       return 0;
    }
    if (n==4)
    {
       cout<<2<<" "<<4<<" "<<1<<" "<<3<<'\n';
       return 0;
    }
    if (n<=3)
    {
        cout<<"NO SOLUTION"<<'\n';
    }
    else if (n%2==0)
    {
        for (int i =n; i>=1; i-=2)
        {
            cout<<i<<" ";
        }
        for (int i =n-1; i>=1; i-=2)
        {
            cout<<i<<" ";
        }
    }
    else
    {
        for (int i =n-1; i>=1; i-=2)
        {
            cout<<i<<" ";
        }
        for (int i =n; i>=1; i-=2)
        {
            cout<<i<<" ";
        }
        
    }
    cout<<'\n';
    
return 0;
}