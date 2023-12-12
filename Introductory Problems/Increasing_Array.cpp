// Increasing_Array.cpp

#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'
#define bug(...) __f (#__VA_ARGS__, __VA_ARGS__)

template <typename Arg1>
void __f (const char* name, Arg1&& arg1) { cout << name << " : " << arg1 << endl; }
template <typename Arg1, typename... Args>
void __f (const char* names, Arg1&& arg1, Args&&... args)
{
	const char* comma = strchr (names + 1, ',');
	cout.write (names, comma - names) << " : " << arg1 << " | "; __f (comma + 1, args...);
}

const int N = 200005;

void solve() {
	int n;
	cin >> n;

	int arr[n];
	if (n > 0)cin >> arr[0];
	int cnt = 0;

	for (int i = 1; i < n; i++) {
		cin >> arr[i];
		if (arr[i] < arr[i - 1]) {
			cnt += (arr[i - 1] - arr[i]);
			arr[i] = arr[i - 1];
		}
	}

	cout << cnt << endl;

}

int32_t main() {

	clock_t z = clock();

	int t = 1;
	// cin >> t;
	while (t--) solve();

	cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC) << endl;

	return 0;
}