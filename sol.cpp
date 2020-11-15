#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;

#define ll long long
#define ar array

typedef tree<int, null_type, less<int>, rb_tree_tag,
tree_order_statistics_node_update> indexed_set;

bool isPrime(int n) {
	for(int i=2; i<sqrt(n); ++i)
		if(n%i==0)
			return 0;
	return 1;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n;
	cin >> n;
	int ans=0;
	for(int i=1; i<=1e3; ++i)
		if(!isPrime(n*i+1))
			ans=i;
	cout << ans << "\n";
}
