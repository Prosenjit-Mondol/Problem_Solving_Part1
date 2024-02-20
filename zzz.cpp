#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    vector<int>v={2,5,8,6};
    vector<int>vv={2,56,5};
    vv.insert(vv.end(),v.begin(),v.end());
    for(auto element :vv)
    {
    cout<<element<<" ";
    }
}
