#include <bits/stdc++.h>
using namespace std;

int main() {

    freopen("watermelon.in", "r", stdin);
    freopen("watermelon.out", "w", stdout);

    int w;
    cin >> w;

    if (w % 2 == 0 && w > 2) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}