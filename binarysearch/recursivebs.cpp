#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> arr, int tar, int st, int end) {
     
    if (st > end) return -1;

    int mid = st + (end - st) / 2;

    if (tar > arr[mid]) {
        return binarySearch(arr, tar, mid + 1, end);
    } else if (tar < arr[mid]) {
        return binarySearch(arr, tar, st, mid - 1);
    } else {
        return mid;
    }
}

int main() {
    vector<int> arr1 = {-1, 0, 3, 4, 5, 9, 12};
    int tar1 = 12;
    cout << binarySearch(arr1, tar1, 0, arr1.size() - 1) << endl;

    vector<int> arr2 = {-1, 0, 3, 5, 9, 12};
    int tar2 = 0;
    cout << binarySearch(arr2, tar2, 0, arr2.size() - 1) << endl;

    return 0;
}
