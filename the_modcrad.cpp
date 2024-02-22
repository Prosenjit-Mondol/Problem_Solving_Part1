#include<bits/stdc++.h>
using namespace std;
int main()
{
    int h1,a1,c1,h2,a2,cnt=0;
    cin >> h1 >> a1 >> c1 >> h2 >> a2;
    vector < string > v;
    for(int i=0;h2>0;i++)
    {
        if((h2-a1)<=0)
        {
            v.push_back("STRIKE");
            break;
        }
 
        if((h1-a2)>0)
        {
            h2=h2-a1;
 
            v.push_back("STRIKE");
        }
        else
        {
            h1=h1+c1;
            v.push_back("HEAL");
        }
        h1=h1-a2;
    }
    if(v.size()==0)
    {
        cout << "0" << endl;
        return 0;
    }
    else cout << v.size() << endl;
    for(int i=0;i<v.size();i++)
    {
        cout << v[i] << endl;
    }
 
}