#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,k;
        cin >> n>>k;
        string s;
        cin >> s;
        int left = 0;
        int right = n - 1;
        int goodPairs = 0,badPairs = 0;
        int zCount = 0,oCount = 0;
        while (left < right)
        {
            if (s[left] == s[right])
            {
                goodPairs++;
            }else{
                badPairs++;
            }
            if (s[left] == '0'){
                zCount++;
            }else{
                oCount++;
            }
            left++;
            right--;
        }
        if(goodPairs == k){
            cout << "YES" << endl;
        }else {
            cout << "NO" << endl;
        }
        
    }
}