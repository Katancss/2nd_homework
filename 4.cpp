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
        is_reset = false;
    }
    else {
        while (!IsPrime(m))
        {
            m += 1;
        }
    }
    return m;
}

void reset_prime() {
    is_reset = true;
}

int main() {
    auto a = next_prime();
    auto b = next_prime();
    auto c = next_prime();
    cout << a << " " << b << " " << c << endl;
    reset_prime();
    auto d1 = next_prime();
    auto d2 = next_prime();
    auto d3 = next_prime();
    cout << d1 << " " << d2 << " " << d3 << endl;
    return 0;
}

