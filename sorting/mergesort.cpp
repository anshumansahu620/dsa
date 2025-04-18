#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr, int low, int mid, int high) {
    vector<int> temp;
    int left = low, right = mid + 1;

    while (left <= mid && right <= high) {
        if (arr[left] <= arr[right]) {
            temp.push_back(arr[left++]);
        } else {
            temp.push_back(arr[right++]);
        }
    }

    // Push remaining elements from left half
    while (left <= mid) {
        temp.push_back(arr[left++]);
    }

    // Push remaining elements from right half
    while (right <= high) {
        temp.push_back(arr[right++]);
    }

    // Copy sorted elements back into original array
    for (int i = low; i <= high; i++) {
        arr[i] = temp[i - low];
    }
}

void mergesort(vector<int> &arr, int low, int high) {
    if (low >= high) return;
    int mid = (low + high) / 2;
    mergesort(arr, low, mid);
    mergesort(arr, mid + 1, high);
    merge(arr, low, mid, high);
}

int main() {
    vector<int> arr = {5, 2, 9, 1, 6, 3};
    mergesort(arr, 0, arr.size() - 1);

    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}
