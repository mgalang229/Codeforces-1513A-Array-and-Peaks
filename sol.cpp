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
		/**
			Sample Cases:
			n = 5, k = 2
			0, 0, 0, 0, 0
			0, 1, 0, 1, 0
			
			n = 6, k = 1
			1, 0, 0, 0, 0, 0
			0, 1, 0, 1, 0,
			
			n = 3, k = 2
			1, 1, 0
			
			n = 2, k = 1
			0, 0
			1
		*/
		// store the 'n' value in the 'temp' variable
		int temp = n;
		// create 'other_values' variable with initial value of 1
		int other_values = 1;
		// check if 'n' can accommodate 'k' peaks
		if ((n - 1) / 2 >= k) {
			// create a loop from 0 to n - 1
			for (int i = 0; i < n; i++) {
				if (i % 2 == 1 && k > 0) {
					// print 'temp' - 1 in every odd position in the sequence
					// while checking if it reached in number of 'k' occurrences
					cout << temp--;
					k--;
				}  else {
					// print the other values from 1 to 'n' that weren't part in the IF-condition
					cout << other_values++;
				}
				cout << " ";
			}
		} else {
			// if not, then print -1
			cout << -1;
		}
		cout << '\n';
	}
	return 0;
}
