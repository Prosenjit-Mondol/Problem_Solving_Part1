#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int s=0,a[n+1];
        for(int i=0;i<n;i++){
        cin>>a[i];
        s+=a[i];
        }
         if(s%2==0)
         cout<<"YES"<<endl;
         else
         cout<<"NO"<<endl;
        }
    return 0;
}