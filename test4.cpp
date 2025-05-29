#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        int maxArrays = 1;
        int lastVal = arr[0];

        for (int i = 1; i < n; i++) {
            if (lastVal + 1 < arr[i]) {
                maxArrays++;
                lastVal = arr[i];
            }
        }

        cout << maxArrays << endl;
    }
}