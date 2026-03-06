#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    unordered_set<char> seen;
    int counter = 0;

    for (char c : s) {
        if (seen.find(c) == seen.end()) {
            seen.insert(c);
            counter++;
        }
    }

    if (counter % 2 == 0) {
        cout << "CHAT WITH HER!";
    } else {
        cout << "IGNORE HIM!";
    }

    return 0;
}