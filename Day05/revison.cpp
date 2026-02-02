#include <iostream>
using namespace std;

// Function to preprocess the array and build prefix sum
void buildPrefixSum(int arr[], int prefix[], int n) {
    prefix[0] = arr[0];

    for (int i = 1; i < n; i++) {
        prefix[i] = prefix[i - 1] + arr[i];
    }
}

// Function to get range sum using prefix array
int rangeSum(int prefix[], int l, int r) {
    if (l == 0)
        return prefix[r];
    return prefix[r] - prefix[l - 1];
}

int main() {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int prefix[n];

    // 🔹 Preprocess the array
    buildPrefixSum(arr, prefix, n);

    int q;
    cin >> q;   // number of queries

    while (q--) {
        int l, r;
        cin >> l >> r;

        cout << rangeSum(prefix, l, r) << endl;
    }

    return 0;
}
