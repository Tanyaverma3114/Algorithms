#include <iostream>
#include <vector>
using namespace std;

int partition(vector<int> &arr, int s, int e)
{
    int i = s - 1;
    for (int j = s; j < e; j++)
    {
        if (arr[j] < arr[e])
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[e]);
    return i + 1;
}

void quicksort(vector<int> &arr, int s, int e)
{
    if (s >= e)
    {
        return;
    }
    int p = partition(arr, s, e);
    quicksort(arr, s, p - 1);
    quicksort(arr, p + 1, e);
}

int main()
{
    vector<int> arr;
    int n, i, a;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> a;
        arr.push_back(a);
    }
    quicksort(arr, 0, n - 1);
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}