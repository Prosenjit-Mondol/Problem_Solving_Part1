#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<pair<int,int>>p;
    p[0]=2;
    p[1]=8;
    p[2]=5;
    p[3]=1;
    p[4]=2;
    sort(p.being(),p.end());
    for(int i=0;i<5;i++)
    {
        cout<<p[i]<<"\n";
    }
}
