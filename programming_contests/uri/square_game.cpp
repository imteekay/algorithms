#include <bits/stdc++.h>

using namespace std;

int main() {
	
	int n, m, q, t, greatest = 0;
	int grid[205][205];
	int dp[205][205];
	
	memset(dp, 0, sizeof dp);

	cin >> n >> m;

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			cin >> grid[i][j];
			
			if (grid[i][j] == 0) dp[i][j] = 0;
			else {
				dp[i][j] = min(dp[i-1][j-1], min(dp[i-1][j], dp[i][j-1])) + 1;
				greatest = max(greatest, dp[i][j]);
			}
		}
	}

	cin >> q;

	while (q--) {
		cin >> t;
		
		if (t <= greatest) cout << "yes" << endl;
		else cout << "no" << endl;
	}

	return 0;
}