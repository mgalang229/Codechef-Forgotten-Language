#include <bits/stdc++.h>

using namespace std;

void decode() {
	int n, k;
	cin >> n >> k;
	string s[n];
	for(int i = 0; i < n; ++i) {
		cin >> s[i];
	}
	int l = 0, cnt = 0;
	string s2[10000];
	for(int i = 0; i < k; ++i) {
		cin >> l;
		for(int j = 0; j < l; ++j) {
			cin >> s2[cnt];
			cnt++;
		}
	}
	bool p[n+1];
	memset(p, false, sizeof(p));
	for(int i = 0; i < n; ++i) {
		for(int j = 0; j < cnt; ++j) {
			if(s[i] == s2[j]) {
				p[i] = true;
			}
		}
	}
	for(int i = 0; i < n; ++i) {
		if(p[i] == true) {
			cout << "YES ";
		}
		else {
			cout << "NO ";
		}
	}
	cout << "\n";
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--) {
		decode();
	}
	return 0;
}
