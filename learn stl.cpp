#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v(50,8);
    v.push_back(2);
    v.push_back(8);
    v.push_back(3);
    cout<<v.size()<<"\n";
    cout<<v[0]<<"\n"<<v[1]<<"\n"<<v[2]<<"\n";
    v.pop_back();
    cout<<v.size()<<"\n";
    v.push_back(1);
    cout<<v.size()<<"\n";
    cout<<"\n"<<"after erase last element"<<"\n";
    cout<<v[0]<<"\n"<<v[1]<<"\n"<<v[2]<<"\n";
    v.clear();
    cout<<v.size()<<"\n";
}
