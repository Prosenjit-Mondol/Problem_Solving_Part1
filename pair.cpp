#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool mycompare(pair<int,int>p1,pair<int,int>p2)
{
    return p1.first>p2.first;
}
int main()
{
    vector<int>p;
    int n;
    cout<<"Enter the size of array"<<"\n";
    cin>>n;
    for(int i=0;i<n;i++)
    {
    int x;
    cin>>x;
    p.push_back(x);
    }
    vector<pair<int ,int>>v;
    for (int i = 0; i < v.size(); i++)
    {
        v.push_back(make_pair(p[i],i));
    }
    sort(v.begin(),v.end(),mycompare);
    for (int i = 0; i <v.size(); i++)
    {
        p[v[i].second]=i;
    }
    for(auto element : p)
    {
    cout<<element<<"\t";
    }
    return 0;
}