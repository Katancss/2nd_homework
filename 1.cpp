#include < iostream>
#include <cmath>
#include <cassert>

using namespace std;

bool IsPrime(unsigned long long n) {
	for (unsigned long long i = 2; i < int(std::sqrt(n)) + 1; ++i) {
		if (n % i == 0) {
			return false;
		}
	}
	return true;
}

int main() {
	unsigned long long n;
	cin >> n;
	assert(IsPrime(2147483647) == 1);
	assert(IsPrime(20) == 1);
	assert(IsPrime(5) == 1);

	if (IsPrime(n)) {
		cout << n << " is Prime" << endl;
	}
	else {
		cout << n << " is not Prime" << endl;
	}

	return 0;
}