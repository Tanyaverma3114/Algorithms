#include <iostream>
#include <vector>
using namespace std;
int search(vector<int> arr, int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
            return i;
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
    cout << "Enter the element to be searched: ";
    cin >> key;
    int ans = search(arr, n, key);
    if (ans == -1)
        cout << "The element is not present in the array." << endl;
    else
        cout << "The element is present at the position " << ans+1 << endl;
    return 0;
}
// Time Complexity=O(n)
// Space Complexity=O(1)