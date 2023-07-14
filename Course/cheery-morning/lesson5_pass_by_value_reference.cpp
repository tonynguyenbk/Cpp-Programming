#include <bits/stdc++.h>

using namespace std;

void change1(int n) {
    n += 100;
}

void change2(int &n) {
    n += 100;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x = 200;
    cout << x << endl;
    cout << &x << endl;
    change2(x);
    cout << x << endl;
}