#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    if (!(cin >> n)) return 0;

    while (n--) {
        string word;
        cin >> word;

        if (word.length() > 10) {
            cout << word.front() << word.length() - 2 << word.back() << "\n";
        } else {
            cout << word << "\n";
        }
    }

    return 0;
}