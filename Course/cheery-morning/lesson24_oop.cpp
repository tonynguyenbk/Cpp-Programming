#include <bits/stdc++.h>
using namespace std;

// Encapsulation: dong goi

using ll = long long;

class SinhVien
{
private:
    string msv;
    string ten;
    double gpa;

public:
    void xinChao()
    {
        cout << "Sinh vien xin chao !\n";
    }
    void nhap()
    {
        getline(cin, msv);
        getline(cin, ten);
        cin >> gpa;
    }
    void in()
    {
        cout << msv << ' ' << ten << ' ' << gpa << endl;
    }

int main()
{
    SinhVien s;
    s.xinChao();
    return 0;
}