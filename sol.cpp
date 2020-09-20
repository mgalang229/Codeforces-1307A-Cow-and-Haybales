#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin >> t;
	while(t--) {
		int n, d;
		cin >> n >> d;
		int a[n];
		for(int i=1; i<=n; ++i)
			cin >> a[i];
		while(d--) {
			for(int i=2; i<=n; ++i) {
				if(a[i]>0) {
					a[i]--;
					a[i-1]++;
					break;
				}
			}
		}
		cout << a[1] << "\n";
	}
}
