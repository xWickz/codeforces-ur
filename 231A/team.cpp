#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;

    vector<vector<int>> m(n, vector<int>(3));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> m[i][j];
        }
    }

    int k = 0;
    int l = 0;

    for (int i = 0; i < n; i++) {
        k = 0;
        for (int j = 0; j < 3; j++) {
            if (m[i][j] == 1) {
                k++;
            }
        }
        if (k >= 2){
            l++;
        }
    }

    cout << l;

    return 0;
}