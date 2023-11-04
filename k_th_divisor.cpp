#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    unsigned long long n,k;
    cin>>n>>k;
    vector<unsigned long long>v;
    for(int i=1;i<=(n/i);i++)
    {
        if(n%i==0)
        {
            v.push_back(i);
            if(i!=(n/i))
            v.push_back(n/i);
        }
    }
    sort(v.begin(),v.end());
    if(v.size()<k)
    {
        cout<<"-1"<<endl;
    }
    else{
    cout<<v[k-1]<<endl;
    }
    return 0;
}
