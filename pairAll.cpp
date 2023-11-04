#include<bits/stdc++.h>
using namespace std;
int main()
{
    pair<int,string>q;
    pair<int,string>p{282003,"Prosenjit"};
    // p.first=2001;
    // p.second="Hero";
    // q=p;
    q=make_pair(282003,"HErO");
    q.swap(p);
    cout<<q.first<<" "<<q.second<<endl;
    cout<<p.first<<" "<<p.second<<endl;
    if(p.first==q.first)//as like its determine !=,>=,<= ;
    cout<<"YES"<<endl;
    else
    cout<<"NO";
}