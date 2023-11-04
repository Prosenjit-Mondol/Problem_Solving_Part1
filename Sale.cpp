#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,s=0;
    cin>>n>>m;
    vector<int> v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    sort(v.begin(),v.end());
    for(int b=1,j=0;j<m;j++,b++)
    {
        if(v[j]<0)
       s+=v[j];
    }
    cout<<abs(s)<<"\n";
    return 0;
}
