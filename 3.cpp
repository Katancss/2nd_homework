#include <iostream>
#include <cmath>
#include <cassert>

using namespace std;

bool is_reset = false;
unsigned long long m = 1;

bool IsPrime(unsigned long long n) {
	for (unsigned long long i = 2; i < int(std::sqrt(n)) + 1; ++i) {
		if (n % i == 0) {
			return false;
		}
	}
	return true;
}

unsigned long long next_prime() {
    m += 1;
    if (is_reset) {
        m = 2;
        is_reset = true;
    }
    else {
        while (!IsPrime(m))
        {
            m += 1;
        }
    }
    return m;
}

int main() {
    assert(next_prime() == 2);
    assert(next_prime() == 3);
    assert(next_prime() == 5);
    assert(next_prime() == 7);
	return 0;
}
