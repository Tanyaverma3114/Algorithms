#include <iostream>
#include <vector>
using namespace std;
void BubbleSort(vector<int> arr, int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
        }
    }
    for (int x : arr)
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
    BubbleSort(arr, n);
    return 0;
}
// Time Complexity=O(n^2)
// Space Complexity=O(1)