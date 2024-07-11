// Author  :  PROSENJIT MONDOL

#include <bits/stdc++.h>
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower);
#define upper(s) transform(s.begin(), s.end(), s.begin(), ::toupper);
using namespace std;
const int inf = 3e5;
using ll = long long;
ll mod = 1e9 + 7;

//------------------------------------------------------------------------------
int partition(int v[], int s, int e)
{
    int pivot = v[s];
    int c = 0;
    for (int i = s + 1; i <= e; i++)
    {
        if (v[i] <= pivot)
        {
            c++;
        }
    }

    int pivotI = s + c;

    swap(v[s], v[pivotI]);

    int i = s, j = e;
    
    while (i < pivotI && j > pivotI)
    {
        while (v[i] <= pivot)
        {
            i++;
        }

        while (v[j] > pivot)
        {
            j--;
        }

        if (i < pivotI && j > pivotI)
        {
            swap(v[i++], v[j--]);
        }
    }

    return pivotI;
}

void quickSort(int arr[], int s, int e)
{
    if (s >= e)
    {
        return;
    }
    int p = partition(arr, s, e);

    quickSort(arr, s, p - 1);

    quickSort(arr, p + 1, e);

}

void solve(void)
{
    int n;
    cin >> n;
    int v[n];
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    quickSort(v, 0, n - 1);

    for (auto element : v)
    {
        cout << element << " ";
    }
}

//------------------------------------------------------------------------------
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t = 1;
    // cin>>t;
    while (t--)
    {
        solve();
    }
    return 0;
}