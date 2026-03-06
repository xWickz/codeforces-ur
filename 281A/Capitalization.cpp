#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    s[0] = static_cast<string::value_type>(::toupper(static_cast<unsigned char>(s[0])));

    cout << s;
    return 0;
} 