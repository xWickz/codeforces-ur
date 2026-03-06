#include <bits/stdc++.h>
using namespace std;

int main() {

    string s1, s2;
    cin >> s1 >> s2;

    bool menor = lexicographical_compare(s1.begin(), s1.end(), s2.begin(), s2.end(),
        [](char a, char b) { return tolower(a) < tolower(b); });

     bool mayor = lexicographical_compare(s2.begin(), s2.end(), s1.begin(), s1.end(),
        [](char a, char b) { return tolower(a) < tolower(b); });

    if (menor) { // s1 < s2
        cout << -1;
    } else if (mayor) {
        cout << 1;
    } else {
        cout << 0;
    }

    return 0;
}