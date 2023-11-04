#include <iostream>
#include<bits/stdc++.h>
#include <vector>
using namespace std;
int main()
{
    std::vector<std::pair<int, int>> pairs = {{5,4}, {3, 9}, {1,0}};

    // add a new pair to vector using make_pair()
    pairs.push_back(std::make_pair(7, 8));

    sort(pairs.begin(),pairs.end());
    // print all pairs
    for (auto p: pairs) {
        std::cout << "(" << p.first << ", " << p.second << ") ";
    }

    return 0;
}

