/*

>> 0(N^2)
 - sap xep chon
 - sap xep noi bot
 - sap xep chen
 - sap xep doi cho truc tiep
 
>> 0(NlogN)
 - sap xep nhanh: quick sort
 - sap xep tron: merge sort
 - sap xep vun dong: heap sort
 - sap xep dem phan phoi: counting sort

>> sort trong thu vien algorithm co do phuc tap la NlogN
>> xay dung tren intro sort: quick sort + heap sort

>> comparator: tieu chi sap xep

*/

// #include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <math.h>
#include <vector>

using namespace std;

bool cmp(int a, int b) {
    if (abs(a) > abs(b)) return true; else return false;
}

int main() {
    int n; cin >> n;
    int a[n];
    for (int &x : a) cin >> x;
    sort(a, a + n, cmp);
    for (int x : a) cout << x << ' ';
    
    return 0;
}