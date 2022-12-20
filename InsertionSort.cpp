#include <iostream>
#include <vector>
using namespace std;
void InsertionSort(vector<int> arr, int n)
{
    int i, j;
    for (i = 1; i < n; i++)
    {
        int key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
    for (auto x : arr)
    {
        cout << x << " ";
    }
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
    InsertionSort(arr, n);
    return 0;
}
// Time Complexity=O(n^2)
// Space Complexity=O(1)