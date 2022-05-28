#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m;
	int a[1000];
	int b;
	bool used[1000];
	bool found,success;

	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		used[i] = false;
	}

	success = true;
	for (int i = 0; i < m; i++) {
		cin >> b;
		found = false;

		for (int j = 0; j < n; j++) {
			if ((a[j] == b)&&(!used[j])) {
				used[j] = true;
				found = true;
				break;
			}
		}

		if (!found)success = false;
	}
	if (success)cout << "Yes" << endl;
	else cout << "No" << endl;
	return 0;
}
