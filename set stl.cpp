#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<int> s;
    int a;
    for(int i=0;i<6;i++)
    {
        cin>>a;
        s.insert(a);
    }
    cout<<s.count(15)<<endl;
    s.erase(5);
    cout<<s.size()<<endl;
    if(s.find(8)==s.end())
        cout<<"Not found";
    //int v=s.upper_bound(2);
   return 0;
}
