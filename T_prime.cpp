#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool ispriem(long long a)
{
    if(a<2)
    return 0;
    else if(a==2)
    return 1;
    else if(a%2==0)
    return 0;
    else
    {
        for(int i=3;i<=(a+1)/i;i+=2)
        {
            if(a%i==0){
            return 0;
            }
        }
        return 1;
    }
    return 0;
}

int main()
{
    ios_base::sync_with_stdio(false);
     cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        long long int x,y;
        cin>>x;
        y=sqrt(x);
        if(y*y==x)
        {
            if(ispriem(y))
            cout<<"YES"<<"\n";
            else
            cout<<"NO"<<"\n";
        }

        else
        cout<<"NO"<<"\n";
    }
    return 0;
}