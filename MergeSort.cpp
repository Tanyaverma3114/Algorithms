#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int> &arr, int s, int e)
{
    int i = s;
    int mid = (s + e) / 2;
    int j = mid + 1;
    vector<int> temp;
    while (i <= mid && j <= e)
    {
        if (arr[i] < arr[j])
        {
            temp.push_back(arr[i++]);
        }
        else
        {
            temp.push_back(arr[j++]);
        }
    }
    while (i <= mid)
    {
        temp.push_back(arr[i++]);
    }
    while (j <= e)
    {
        temp.push_back(arr[j++]);
    }
    int k = 0;
    for (int i = s; i <= e; i++)
    {
        arr[i] = temp[k++];
    }
    return;
}

void mergesort(vector<int> &arr, int s, int e)
{
    if (s >= e)
    {
        return;
    }
    int mid = (s + e) / 2;
    mergesort(arr, s, mid);
    mergesort(arr, mid + 1, e);
    return merge(arr, s, e);
}

int main()
{
    vector<int> arr;
    int n, a, s, e;
    cout << "Enter size of the vector: ";
    cin >> n;
    cout << "Enter elements of the vector: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        arr.push_back(a);
    }
    s = 0;
    e = n - 1;
    mergesort(arr, s, e);
    for (int x : arr)
    {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}