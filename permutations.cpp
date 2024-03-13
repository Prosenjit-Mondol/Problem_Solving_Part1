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
cout<<"Input:"<<'\n';
int n;
    cin>>n;
    if (n<=4)
    {
        cout<<"Output:\nNO SOLUTION"<<'\n';
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
    
return 0;
}