#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int n=2;
    if (n&1)
    {
        cout<<"even";
    }
    else
    cout<<"odd";
    cout<<(n&1);
}
