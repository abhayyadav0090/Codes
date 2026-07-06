#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector<int> leaders;
    int max_from_right = INT_MIN;

    // Traverse from right to left
    for (int i = n - 1; i >= 0; i--) {
        if (arr[i] >= max_from_right) {
            leaders.push_back(arr[i]);
            max_from_right = arr[i];
        }
    }

    // Reverse to restore left-to-right order
    reverse(leaders.begin(), leaders.end());

    for (int x : leaders) {
        cout << x << " ";
    }
    cout << "\n";

    return 0;
}
