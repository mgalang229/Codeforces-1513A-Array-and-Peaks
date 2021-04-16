#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n, k;
		cin >> n >> k;
		// create 'ans' vector to store the sequence (1-based index)
		vector<int> ans(n + 1);
		int num = n;
		for (int i = 2; i < n; i += 2) {
			if (k == 0) {
				// if 'k' is equal to 0, then stop storing values in the vector
				break;
			}
			// otherwise, store values starting from 'n' with decrements of 1 as the loop iterates
			ans[i] = num--;
			// decrement the value of 'k'
			k--;
			// increase index 'i' by 2 to store it only in the even positions
		}
		if (k) {
			// if the 'k' wasn't fully accommodated, then print -1
			cout << -1 << '\n';
			continue;
		}
		int cur = 1;
		for (int i = 1; i <= n; i++) {
			if (!ans[i]) {
				// if the current 'a[i]' has no value stored in it,
				// then store the value of 'cur' in increasing factor of 1
				ans[i] = cur++;
			}
		}
		// print the sequence
		for (int i = 1; i <= n; i++) {
			cout << ans[i] << " ";
		}
		cout << '\n';
	}
	return 0;
}
