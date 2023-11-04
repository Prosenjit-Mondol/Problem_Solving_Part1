#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;
    int a;
    for(int i=0;i<5;i++)
    {
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    for(auto i: v)
        cout<<i<<endl;

    vector<int>::iterator it=v.begin();//auto it=v.begin();

    for(int k=0;k<5;k++){
       cout<<*it<<endl;
    it++;
    }

    return 0;
}
