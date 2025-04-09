#include <bits/stdc++.h>
using namespace std;

void is(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        int j = i;
        while (j > 0 && (arr[j - 1] > arr[j])) {
            swap(arr[j], arr[j - 1]);
            j--;
        }
    }
}

int main() {
    int arr[] = {1, 3, 4, 5, 2, 4, 5, 0};
    is(arr, 8);
    for (int i = 0; i < 8; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
