#include <iostream>
#include <cassert>

using namespace std;

unsigned long long F(int n) {
	unsigned long long a = 0;
	unsigned long long b = 1;
	for (int i = 0; i < n; ++i) {
		unsigned long long tmp = a;
		a = b;
		b += tmp;
	}
	return a;
}

int main() {
	assert(F(0) == 0);
	assert(F(1) == 1);
	assert(F(3) == 2);
	assert(F(50) == 12586269025);
	return 0;
}

