#include <bits/stdc++.h>
using namespace std;

vector<int> lr(vector<int> &v) {
    int n = v.size();
    int temp = v[0]; // store the first element

    for (int i = 1; i < n; i++) {
        v[i - 1] = v[i]; // shift elements to the left
    }

    v[n - 1] = temp; // place the first element at the endr
    return v;
}

int main() {
    vector<int> v = {1, 3, 4, 5, 6};
    vector<int> temp = lr(v);

    for (int i = 0; i < temp.size(); i++) {
        cout << temp[i] << endl;
    }

    return 0;
}
