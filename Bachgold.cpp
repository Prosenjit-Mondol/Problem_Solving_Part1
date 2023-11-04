#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int f=n/2;
    if(n%2==0)
    {
        cout<<f<<endl;
        for(int i=0;i<f;i++)
        cout<<"2"<<" ";
    }
    else{
        cout<<f<<endl;
        for(int j=0;j<f-1;j++)
        cout<<"2"<<" ";
        cout<<"3"<<" ";
    }
    cout<<endl;
    return 0;
}