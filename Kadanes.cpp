#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[10], n, i;
    cin>>n;
    for(i=0; i<n; i++){
        cin>>arr[i];
    }
    int cursum=arr[0];
    int largestsum=arr[0];
    for(i=1; i<n; i++){
        cursum=max(arr[i], cursum+arr[i]);
        largestsum=max(largestsum, cursum);
    }
    cout<<largestsum<<endl;
    return 0;
}