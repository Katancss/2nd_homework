#include <iostream>
using namespace std;

void b_to_d(unsigned int n) {
    int c;
    bool start = false;
    for (int i = sizeof(n) * 8 - 1; i >= 0; --i)
    {
        c = ((n >> i) & 1);
        if ((c == 1))
            start = true;
        if (start)
            cout << c;
    }
}

int main() {
    b_to_d(10230123);
	return 0;
}

