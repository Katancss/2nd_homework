#include <iostream>
#include <cassert>

using namespace std;

unsigned long long fact(int n) {
	if (n == 1)
		return 1;
	else {
		return n * fact(n - 1);
	}
}

int main() {
	assert(fact(1) == 1);
	assert(fact(3) == 6);
	assert(fact(5) == 120);
	return 0;
}
