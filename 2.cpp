#include <iostream>

using namespace std;

unsigned long long to_num(unsigned long long num, char s) {
    if (s >= '0' && s <= '9') {
        num = num * 10 + s - '0';
    }
    return num;
}

int main() {
    char symbol;
    unsigned long long number = 0;

    while (cin.get(symbol) && symbol != '@')
        number = to_num(number, symbol);

    cout << number;
    return 0;
}

