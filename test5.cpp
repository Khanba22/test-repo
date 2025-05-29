#include <bits/stdc++.h>
using namespace std;


int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int left = 0, right = 1000000000;
        int top = 0, bottom = 1000000000;
        vector<int>dp(n);
        vector<pair<int, int>>arr(n);
        for(int i = 0; i < n; i++) {
            int x, y;
            cin >> x >> y;
            arr[i].first = x;
            arr[i].second = y;
            left = max(left, x);
            right = min(right, x);
            top = max(top, y);
            bottom = min(bottom, y);
        }
        for(int i = 0; i < n; i++) {
            int newLeft = 0, newRight = 1000000000;
            int newTop = 0, newBottom = 1000000000;
// Calculate new rectangle bounds after removing current monster
            for(int j = 0; j < n; j++) {
                if(i == j) continue; // Skip current monster
                newLeft = max(newLeft, arr[j].first);
                newRight = min(newRight, arr[j].first);
                newTop = max(newTop, arr[j].second);
                newBottom = min(newBottom, arr[j].second);
            }
// Calculate area difference and store in dp
            int originalArea = (right - left) * (top - bottom);
            int newArea = (newRight - newLeft) * (newTop - newBottom);
            dp[i] = originalArea - newArea;

        }
    }
}
