#include <iostream>
#include <string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n; cin >> n;
	string s; cin >> s;

	auto cl = int{ 0 };
	for (auto i = 0; i < n; ++i) {
		if ('L' == s[i]) {
			++cl;
			++i;
		}
	}

	if (0 == cl) {
		cout << n;
	}
	else {
		cout << n - (cl - 1);
	}

	return 0;
}