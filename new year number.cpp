#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long int n;
        cin>>n;
        int r1=n%2020;
        int r2=(n-r1)/2020-r1;
        if(r2>=0 && 2020*r2+2021*r1==n)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
