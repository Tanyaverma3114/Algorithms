#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int search(vector<int> arr, int n, int key)
{
    int s = 0;
    int e = n - 1;
    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (arr[mid] == key)
            return mid;
        else if (key > arr[mid])
            s = mid + 1;
        else
            e = mid - 1;
    }
    return -1;
}
int main()
{
    vector<int> arr;
    int n, a, i, key;
    cout << "Enter the size of the array: ";
    cin >> n;
    cout << "Enter the elements of the array: ";
    for (i = 0; i < n; i++)
    {
        cin >> a;
        arr.push_back(a);
    }
    sort(arr.begin(), arr.end());
    cout << "Arayy in ascending order: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
        if (i == n - 1)
            break;
    }
    cout << endl;
    cout << "Enter the element to be searched: ";
    cin >> key;
    int ans = search(arr, n, key);
    if (ans == -1)
        cout << "The element is not present in the array." << endl;
    else
        cout << "The element is present at the position " << ans + 1 << endl;
    return 0;
}
// Time Complexity=O(log n)
// Space Complexity=O(1)