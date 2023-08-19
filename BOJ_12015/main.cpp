#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <tuple>
#include <string>
#include <algorithm>

using namespace std;

using ll = long long;
using vb = vector<bool>;
using vvb = vector<vb>;
using vi = vector<int>;
using vvi = vector<vi>;
using vl = vector<ll>;
using vvl = vector<vl>;
using pii = pair<int, int>;
using vii = vector<pii>;
using pll = pair<ll, ll>;
using vll = vector<pll>;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n;
	cin >> n;

	auto now = vi{};
	now.reserve(n);
	for (auto i = 0; i < n; ++i) {
		int x;
		cin >> x;

		if (0 == now.size()) {
			now.push_back(x);
			continue;
		}

		if (now.back() < x) {
			now.push_back(x);
			continue;
		}

		auto p = lower_bound(now.begin(), now.end(), x);
		*p = x;
	}

	cout << now.size();

	return 0;
}