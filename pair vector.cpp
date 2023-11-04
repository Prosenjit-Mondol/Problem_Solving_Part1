#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    pair<int,int>v[5];
    for(int i=0;i<5;i++)
    {
        cin>>v[i].first>>v[i].second;
    }
    sort(v,v+5);
    for(int j=0;j<5;j++)
    {
        cout<<v[j].first<<" "<<v[j].second<<endl;
    }

}
