#include <iostream>
#include <vector>
using namespace std;
void CountSort(vector<int> arr, int n)
{
    int max_ele = arr[0];
    for (int i = 0; i < n; i++)
    {
        max_ele = max(max_ele, arr[i]);
    }
    vector<int> freq(max_ele, 0);
    for (int i = 0; i < n; i++)
    {
        freq[arr[i]]++;
    }
    for (int i = 1; i <= max_ele; i++)
    {
        freq[i] += freq[i - 1];
    }
    vector<int> output(n, 0);
    for (int i = n - 1; i >= 0; i--)
    {
        output[--freq[arr[i]]] = arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        arr[i] = output[i];
    }
    for (auto x : arr)
        cout << x << " ";
}
int main()
{
    vector<int> arr;
    int n, a, i;
    cout << "Enter the size of the array: ";
    cin >> n;
    cout << "Enter the elements of the array: ";
    for (i = 0; i < n; i++)
    {
        cin >> a;
        arr.push_back(a);
    }
    CountSort(arr, n);
    return 0;
}
// Time Complexity=O(n+range)
// Space Complexity=O(n+range)