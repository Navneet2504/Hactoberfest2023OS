#include <bits/stdc++.h>
using namespace std;
void selectionSort(vector<int> &v)
{
    int n = v.size();
    int i, j, min_idx;
    for (i = 0; i < n - 1; i++)
    {
        min_idx = i;
        for (j = i + 1; j < n; j++)
        {
            if (v[j] < v[min_idx])
                min_idx = j;
        }
        if (min_idx != i)
            swap(v[min_idx], v[i]);
    }
    for (i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
}
int main()
{
    vector<int> v = {64, 25, 12, 22, 11};
    cout << "Navneet Savita" << endl;
    cout << "Sorted array: \n";
    selectionSort(v);
    return 0;
}
