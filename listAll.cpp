#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int>li;
    cout<<"Enter the list size: ";
    int n;
    cin>>n;
    for (int i = 0; i <n; i++)
    {
        int x;
        cin>>x;
        li.push_back(x);
    }
    list<int>::iterator it;
    // for (it=li.begin();it!=li.end();it++)
    // {
    //     cout<<*it<<" ";
    // }
    // cout<<endl;
    // li.push_front(8);//add element infornt
    // li.pop_front();//delete first element
    // li.pop_back();//delete last element
    //advance(it,3); li.insert(it,5,8);//add any 
    it=li.begin();
    advance(it,2);
    //li.erase(it);
    for(auto it:li)
    {
        cout<<it<<" ";
    }
    cout<<endl<<li.front()<<" "<<li.back()<<endl;
    cout<<"The size of list is "<<li.size()<<" ";
    //li.clear();//clear all element.
    if(li.empty())cout<<"empty";
    else cout<<"not empty";
    
}