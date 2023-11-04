#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        int s=a+b+c;
        int m=max(a,b);
        m=max(m,c);
        int n=min(a,b);
        n=min(n,c);
        int r=s-m-n;
        cout<<r<<endl;
    }
    return 0;
}
