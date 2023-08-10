// chen 1 phan tu vao vi tri k trong mang

#include <iostream>
using namespace std;

int main() {
	int n, x, k;
	int a[1005];
	cin >> n >> x >> k;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	--k;
	for (int i = n-1; i >= k; i--) {
		a[i+1] = a[i];
	}
	a[k] = x;
	++n;
	for (int i = 0; i < n; i++) {
		cout << a[i] << ' ';
	}
	return 0;
}