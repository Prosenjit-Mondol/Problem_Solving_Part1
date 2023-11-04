#include<iostream>
using namespace std;
int main()
{
    int n,a[1000],v=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        v+=a[i];
    }
    cout<<v<<"\n";
    return 0;
}
