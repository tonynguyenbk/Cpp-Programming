#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;

    pair<int, int> A[n];
    for (int i = 0; i < n; i++)
    {
        cin >> A[i].first >> A[i].second;
    }
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << A[i].first << ' ' << A[i].second << endl;
    }

    // pair<char, int> p{'A', 100};
    // cout << p.first << ' ' << p.second << endl;

    // int n; cin >> n;

    // vector<int> v;  // vector<int> v(n), vector<int> v(n, 1000);

    // for (int i = 0; i < n; i++) {
    //     int x; cin >> x;
    //     v.push_back(x);
    // }
    // for (int x : v) {
    //     cout << x << ' ';
    // }

    // vector<int> v = {1, 2, 3, 4, 5};

    // v.push_back(6);

    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i] << ' ';
    // }

    // cout << endl;
    // for (vector<int>::iterator it = v.begin(); it != v.end(); ++it) {
    //     cout << *it << ' ';
    // }

    // cout << endl;
    // for (auto x : v) {
    //     cout << x << ' ';
    // }

    // cout << endl;
    // v.insert(v.begin() + 2, 100);
    // for (auto x : v) {
    //     cout << x << ' ';
    // }

    // cout << endl;
    // v.insert(v.begin(), 300);
    // for (auto x : v) {
    //     cout << x << ' ';
    // }

    // cout << endl;
    // v.erase(v.begin()+2);
    // for (auto x : v) {
    //     cout << x << ' ';
    // }

    // vector<int>::iterator it = v.begin();
    // cout << *it << endl;

    // ++it;
    // cout << *it << endl;

    // vector<int>::iterator it2 = v.begin() + 3;
    // cout << *it2 << endl;

    // for (int x : v) {
    //     cout << x << ' ';
    // // }

    // cout << endl;
    // v.clear();
    // cout << v.size() << endl;
    // cout << v.empty() << endl;

    return 0;
}