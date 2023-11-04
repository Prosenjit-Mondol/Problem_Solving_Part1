#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;
    cout<<"Enter the size of array: ";
    int n;
    cin>>n;
    cout<<"Enter the element of array: ";
    for (int i = 0; i <n; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    cout<<"Print value ";
    for (int i = 0; i <v.size(); i++)
    {
        cout<<v.at(i)<<" ";
    }
    cout<<"The size of array is "<<v.size()<<endl;
    // cout<<v.front()<<endl;//print 1st element
    // cout<<v.back()<<endl;//print last element
    // // v.clear();
    // // cout<<"The size of array is "<<v.size()<<endl;
    // if(v.empty())cout<<"Empty";
    // else
    // cout<<"Not empty"<<endl;
    // v.pop_back();//erase last element;
    // for (int i = 0; i <v.size(); i++)
    // {
    //     cout<<v.at(i)<<" ";
    // }
    // cout<<endl;
    // v.erase(v.begin()+1);//erase any element 
    // for (int i = 0; i <v.size(); i++)
    // {
    //     cout<<v[i]<<" ";
    // }
    // cout<<endl;
    // v.erase(v.begin()+1,v.begin()+2);//erase element one point to another 
    // for (int i = 0; i <v.size(); i++)
    // {
    //     cout<<v[i]<<" ";
    // }
    // cout<<endl;
    // v.insert(v.begin()+1,8);//add any element at any position;
    // for (int i = 0; i <v.size(); i++)
    // {
    //     cout<<v[i]<<" ";
    // }
    // cout<<endl;
    // v.insert(v.begin()+2,4,3);//add any element at any position many time;
    // for (int i = 0; i <v.size(); i++)
    // {
    //     cout<<v[i]<<" ";
    // }
    // cout<<endl;
    // vector<int>v1;
    // cout<<"After swaping "<<endl;
    // swap(v,v1);//swapping vector;
    // for (int i = 0; i <v.size(); i++)
    // {
    //     cout<<v1[i]<<" ";
    // }
    sort(v.begin(),v.end(),greater<int>());//sorting deceding;
    cout<<"After sorting"<<endl ;
    for (int i = 0; i <v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    reverse(v.begin(),v.end());//reversing vector;
    cout<<"After reversing"<<endl ;
    for (int i = 0; i <v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    cout<<"print by iterator"<<endl;
    vector<int>::iterator it;//like a pointer that help to solve time complexity;
    for (it=v.begin();it!=v.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;

}