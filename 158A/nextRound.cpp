#include <bits/stdc++.h>
using namespace std;

int main() {

    int n, k;
    cin >> n >> k; 

    vector<int> y(n);
    for (int i = 0; i < n; i++) {
            cin >> y[i];
    }

    int pos = y[k-1];
    int participantes = 0;

    for (int i = 0; i < n; i++) {
        if (y[i] >= pos && y[i] > 0) {
             participantes++;
        }
        
    }

    cout << participantes;
    return 0;
}