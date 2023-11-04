#include<bits/stdc++.h>//#include "bits/stdc++.h"
using namespace std;
int main()
{
    int l,a[4]={5,6,2,9};
    sort(a,a+4);

    cout<<"The array is :"<<"\n";
    for(auto i: a)
    {
        l++;
    }
    cout<<"The length of array is :"<<l<<"\n"<<"Sorted array is:"<<"\n";
    for(int i=0;i<4;i++)
    {
        cout<<a[i]<<"\n";
    }
}
