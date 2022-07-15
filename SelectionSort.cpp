#include <iostream>
#include <vector>
using namespace std;
void SelectionSort(vector<int> arr, int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
    {
        int min = i;
        for (j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min])
                min = j;
        }
        swap(arr[i], arr[min]);
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
    SelectionSort(arr, n);
    return 0;
}
// Time Complexity=O(n^2)
// Space Complexity=O(1)