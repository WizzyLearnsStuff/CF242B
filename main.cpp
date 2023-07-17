#include<iostream>

using namespace std;

int main() {
	int n; 
	cin >> n;

	long long a, b;
	cin >> a >> b;
	int idx = 1;

	for (int i = 1; i < n; i++) {
		long long c, d;
		cin >> c >> d;

		if (c <= a && b <= d) {
			idx = i + 1;
			a = c;
			b = d;
		}
		else if (c < a) {
			idx = -1;
			a = c;
		}
		else if (b < d) {
			idx = -1;
			b = d;
		}
	}

	cout << idx;
}
