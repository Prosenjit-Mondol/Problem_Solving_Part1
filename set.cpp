#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<int> s;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        s.insert(x);
    }
    s.erase(4);
    for(int x:s)
        cout<<x<<" ";
    return 0;
}
